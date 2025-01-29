

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at the end of the list
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;  // Circular link to itself
    } else {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;  // Traverse to the last node
        }
        temp->next = newNode;
        newNode->next = *head;  // Point new node to the head to complete the circle
    }
}

// Traverse the list
void traverse(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("Back to head\n");
}

// Delete a node by key
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = *head, *prev = NULL;
    
    // If the node to be deleted is the head node
    if (temp->data == key && temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }
    
    // Find the node to be deleted
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != *head && temp->data != key);
    
    // If the node was found
    if (temp->data == key) {
        prev->next = temp->next;
        if (temp == *head) {
            *head = prev->next;  // If it's the head, update the head pointer
        }
        free(temp);
    } else {
        printf("Node not found\n");
    }
}

int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n Menu - \n");
        printf("1> Insert\n");
        printf("2> Delete\n");
        printf("3> Display\n");
        printf("4> Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert - ");
                scanf("%d", &value);
                insertEnd(&head, value);
                break;
            
            case 2:
                printf("Enter value to delete - ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;

            case 3:
                printf("Circular Linked List - ");
                traverse(head);
                break;

            case 4:
                printf("Exit");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

