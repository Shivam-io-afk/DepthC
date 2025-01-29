#include <stdio.h>
#include <stdlib.h>


/*int main()
{
    // Traversing();
    // insertion();

    // Lsearch();
}*/



int mainnn()
{
    int a[50], size, i;
    printf("Name - Shivam");
    printf("\nRoll No. - 240490\n");

    printf("Enter size of Array ");
    scanf("%d", &size);

    printf("Enter Elements of Array ");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

}

















// Insertion in 1D Array


int maiaazzzqqn() {
    int arr[100], n, i, element, position;

    // printf("Name - Shivam");
    // printf("\nRoll No. - 240490\n");

    printf("Enter the number of elements in the array - ");
    scanf("%d", &n);

    printf("Enter %d elements - ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted - ");
    scanf("%d", &element);

    printf("Enter the position where the element should be inserted (1 to %d) - ", n+1);
    scanf("%d", &position);




    for(i = n; i >= position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position-1] = element;
    n++;




    printf("Array after the insertion is  - ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }



    return 0;
}







// Traversing Printing 2D array in Matrix 

int maaaain(){
    int r = 0,c = 0,arr[3][3];
    
    // printf("Name - Shivam");
    // printf("\nRoll No. - 240490\n");

    printf("Enter element in matrix - ");
    for(r = 0; r < 3; r++){
        for(c = 0; c <3; c++ ){
            printf("[%d][%d] - ",r,c);
            scanf("%d",&arr[r][c]);
        }
    }


    printf("output is - \n\n");
    for(r = 0; r < 3; r++){
        for(c = 0; c <3; c++ ){
            printf(" %d ",arr[r][c]);
        }
            printf("\n");
    }
    printf("\n");
    
    return 0;
}  















// Insertion in 2D Array



int mainsssxxxx() {
    int rows, cols, i, j, newElement, insertRow, insertCol;
    //       printf("Name - Shivam");
    // printf("\nRoll No. - 240490\n");
    printf("Rows - ");
    scanf("%d", &rows);
    printf("Columns - ");
    scanf("%d", &cols);

    int matrix[100][100];

    printf("enter the elements\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter new element ");
    scanf("%d", &newElement);

    printf("row do you want to insert [1 to %d] ", rows);
    scanf("%d", &insertRow);
    printf("column do you want to insert [1 to %d] ", cols);
    scanf("%d", &insertCol);

    insertRow--;
    insertCol--;

    matrix[insertRow][insertCol] = newElement;

    printf("\nThe matrix after insertion is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}













// Deletion in 1D 
int maasssryyin() {
    int arr[100], n, i, pos;
    // printf("Name - Shivam");
    // printf("\nRoll No. - 240490\n");

    printf("How many elements do you want in the array - ");
    scanf("%d", &n);

    printf("enter %d value\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe current array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nposition of the element you want to delete (1 to %d): ", n);
    scanf("%d", &pos);

   while (1 < 2){
        if (pos < 1 || pos > n) {
            printf("position invalid enter between 1 and %d\n", n);
            printf("\nEnter the position of element you want to delete [1 to %d] - ", n);
            scanf("%d", &pos);
        }
        else{
            break;
        }
   }




   
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;





    printf("\nThe array after deletion is - ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




























//Linear Search in Array
int malldooin()
{
   int a[10], item, i,n;
    printf("Name - Shivam");
    printf("\nRoll No. - 240490\n");

    printf("Enter Number of elemets = ");
    scanf("%d",&n);
 

    printf("Enter values in the array = ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("values stored intot the array --> ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
  
    printf("\nEnter Element to search --> ");
    scanf("%d",&item);

    for(i = 0; i < n; i++)
    {
        if(item == a[i]){
            printf("\n %d Item found at index %d " ,item, i);
            break;
        }
    }
        
    if(i == n){
        printf("Not found");
    }
      
    
    return 0;
}






//linear search in 2D


int maillalkkn() {
    int rows, cols;
    char target;

    printf("Name - Shivam");
    printf("\nRoll No. - 240490\n");

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    char matrix[100][100];

    printf("Enter the characters of the array (row-wise):\n");
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            printf("Character at row %d, column %d: ", i + 1, j + 1);
            scanf(" %c", &matrix[i][j]); 
        }
    }

    
    printf("Enter the character you want to search for: ");
    scanf(" %c", &target);


    int found = 0; 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            if (matrix[i][j] == target) { 
                printf("Found '%c' at position (%d, %d)\n", target, i + 1, j + 1);
                found = 1; // Set found to true
            }
        }
    }

    if (found == 0) {
        printf("The character '%c' is not in the array.\n", target);
    }

    return 0; 
}

























//Binary search 

int bSearch(int arr[], int size, int target);

int maillllln() {
    int size, target;
    printf("Name - Shivam");
    printf("\nRoll No. - 240490\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = bSearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}




int bSearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}



























// Binary Search in 2D


int bSearch2D(int arr[][100], int rows, int cols, int target) {
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        int midRow = mid / cols;
        int midCol = mid % cols;

        if (arr[midRow][midCol] == target) {
            printf("Element %d found at position (%d, %d)\n", target, midRow + 1, midCol + 1);
            return 1;
        }

        if (arr[midRow][midCol] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1; 
}


int maiooooon() {
    int rows, cols, target;
      printf("Name - Shivam");
    printf("\nRoll No. - 240490\n");


    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[100][100]; 

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = bSearch2D(arr, rows, cols, target);

    if (result == -1) {
        printf("Element not found in the array\n");
    }

    return 0;
}












































// LINKED lIST OPERATION

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}


void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode; 
}


void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;


    if (temp != NULL && temp->data == key) {
        *head = temp->next; 
        free(temp);         
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}





void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d >>> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}




int maiiiin() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 101);
    insertAtBeginning(&head, 194);
    insertAtBeginning(&head, 204);
    insertAtBeginning(&head, 356);

    insertAtEnd(&head,211);
    insertAtEnd(&head,339);
    insertAtEnd(&head,374);

    printf("Linked list - ");
    printList(head); 

    deleteNode(&head,339);
    deleteNode(&head,204);
    printf("After deletion - ");
    printList(head);

    return 0;
}




























// STACK OPERATION

void push();
void pop();
void display();

#define MAX_ITEMS 6

int stack[MAX_ITEMS];
int top = -1;

void push(){
    int value;
    if (top == MAX_ITEMS - 1){
        printf("\nOVERFLOW, Stack is full\n");
    } 
    else{
        printf("Enter value - ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d PUSHED", value);
    }
}

void pop(){
    if (top == -1) {
        printf("\nUNDERFLOW Stack is empty!\n");
    } else {
        printf("%d POPPED", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("\nUNDERFLOW Stack is empty!\n");
    } 
    else {-
        printf("stack is - \n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}





int main_____() {
    int inputs;

    while (0 != 1) {
        printf("\nStack Operation = \n");
        printf("1 - Push\n");
        printf("2 - Pop\n");
        printf("3 - Display\n");
        printf("4 - Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &inputs);

        switch (inputs) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Enter a valid option.\n");
        }
    }

    return 0;
}

































//QUEUE 

#define MAX_VAL 4

int queue[MAX_VAL];
int front = -1, rear = -1;

void enqueue_(int value) {
    if (rear == MAX_VAL - 1) {
        printf("Queue is full! Insertion not possible.\n");
    } 
    else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeue_() {
    if (front == -1 || front > rear) {
        printf("It is Empty\n");
    } 
    else {
        printf("DELETED %d\n", queue[front]);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display_() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } 
    else {
        printf("QUEUE is - ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int mainkoooook() {
    int choice, value;
    while (0 != 1) {
        printf("\nQueue Operations:\n");
        printf("1> Enqueue \n");
        printf("2> Dequeue \n");
        printf("3> Display Queue \n");
        printf("4> Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                enqueue_(value);
                break;
            case 2:
                dequeue_();
                break;
            case 3:
                display_();
                break;
            case 4:
                return 0;
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}








//Queue Linked List ----------------------------------------------------------------------------- <<<





















//CIRCULAR LINKEDLIST 

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;  
    } else {
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next; 
        }
        temp->next = newNode;
        newNode->next = *head; 
    }
}

void traverse(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Back to head)\n");
}


void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head, *prev = NULL;
    

    if (temp->data == key && temp->next == *head) {
        free(temp);
        *head = NULL;
        return;
    }
    
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != *head && temp->data != key);
    
    // If the node was found
    if (temp->data == key) {
        prev->next = temp->next;
        if (temp == *head) {
            *head = prev->next; 
        }
        free(temp);
    } else {
        printf("Node not found.\n");
    }
}

int mainopppop() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertEnd(&head, value);
                break;
            
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;

            case 3:
                printf("Circular Linked List:\n");
                traverse(head);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}





























// By Circular queue

typedef struct Node {
    int data;
    struct Node* next;
} Node;


typedef struct {
    Node* front;
    Node* rear;
} CircularQueue;

 Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void initQueue(CircularQueue* q) {
    q->front = q->rear = NULL;
}

int isEmpty(CircularQueue* q) {
    return (q->front == NULL);
}

void enqueue(CircularQueue* q, int data) {
    Node* newNode = createNode(data);
    if (isEmpty(q)) {
        q->front = q->rear = newNode;
        newNode->next = q->front;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
        q->rear->next = q->front;
    }
}

int dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int data = q->front->data;
    Node* temp = q->front;
    if (q->front == q->rear) {
        q->front = q->rear = NULL;
    } 
    else {
        q->front = q->front->next;
        q->rear->next = q->front;
    }
    free(temp);
    return data;
}

void displayQueue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    Node* temp = q->front;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    while (temp != q->front);
    printf("\n");
}

int maiomomn() {
    CircularQueue q;
    initQueue(&q);
    int choice, data;

    while (1) {
        printf("Circular Operations\n");
        printf("1 ENQUEUED\n");
        printf("2 DEQUEUED\n");
        printf("3 Display QUEUED\n");
        printf("4 Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data - ");
                scanf("%d", &data);
                enqueue(&q, data);
                break;
            case 2:
                printf("DEQUEUED %d \n", dequeue(&q));
                break;
            case 3:
                printf("Queue  ");
                displayQueue(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
                exit(0);
        }
    }

    return 0;
}





























// Doubly linkedlist 

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head != NULL) {
        (*head)->prev = newNode;
        newNode->next = *head;
    }
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with value %d not found.\n", key);
        return;
    }

    if (temp == *head) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    } else {
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }
    }

    free(temp);
    printf("Node with value %d deleted successfully.\n", key);
}

void displayForward(struct Node* head) {
    struct Node* temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayReverse(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }

    printf("Reverse: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int mainmnmn() {
    struct Node* head = NULL;
    int choice, value;

    do {
        printf("\nDoubly Linked List Menu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete a node\n");
        printf("4. Display list (forward)\n");
        printf("5. Display list (reverse)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 2:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 4:
                displayForward(head);
                break;
            case 5:
                displayReverse(head);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}


































