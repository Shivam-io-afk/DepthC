#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value); 
    }
    if (value < root->data) {
        root->left = insertNode(root->left, value); 
    } else if (value > root->data) {
        root->right = insertNode(root->right, value); 
    }
    return root;
}

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

struct Node* searchNode(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root; 
    }
    if (key < root->data) {
        return searchNode(root->left, key); 
    }
    return searchNode(root->right, key); 
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    do {
        printf("\nOperations - \n");
        printf("1> Insert\n");
        printf("2> Display Inorder\n");
        printf("3> Search\n");
        printf("4> Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value - ");
                scanf("%d", &value);
                root = insertNode(root, value);
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;

            case 3:
                printf("Enter value - ");
                scanf("%d", &value);
                if (searchNode(root, value)) {
                    printf("%d is Found\n", value);
                } else {
                    printf("%d is not Found\n", value);
                }
                break;

            case 4:
                printf("Exit \n");
                break;

            default:
                printf("Invalid \n");
        }
    } while (choice != 4);

    return 0;
}