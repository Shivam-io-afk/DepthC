#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>


/*int main()
{
    // Traversing();
    // insertion();

    // Lsearch();
}*/



int Traversing()
{
    int a[50], size, i;

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

















// Insertion in 1D


int mainnn() {
    int arr[100], n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the position where the element should be inserted (1 to %d): ", n+1);
    scanf("%d", &position);

    for(i = n; i >= position; i--) {
        arr[i] = arr[i-1];
    }

       
    arr[position-1] = element;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }



    return 0;
}




// Traversing Printing 2D array in Matrix 

int printing2D(){
    int r = 0,c = 0,arr[3][3];
    
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















// Insertion in 2D



int twoDArrayInsetion() {
    int rows, cols, i, j, newElement, insertRow, insertCol;

    // Ask the user for the dimensions of the matrix
    printf("How many rows do you want in your matrix? ");
    scanf("%d", &rows);
    printf("How many columns do you want in your matrix? ");
    scanf("%d", &cols);

    // Declare the 2D array (matrix) with a maximum size of 100x100
    int matrix[100][100];

    // Ask the user to enter the elements of the matrix
    printf("Please enter the elements of the matrix one by one:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the current matrix
    printf("\nThe current matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Ask the user for the new element to be inserted
    printf("\nEnter the new element you want to insert: ");
    scanf("%d", &newElement);

    // Ask the user for the position to insert the new element
    printf("row want to insert (1 to %d)? ", rows);
    scanf("%d", &insertRow);
    printf("column you want to insert (1 to %d)? ", cols);
    scanf("%d", &insertCol);

    // Convert the input position to 0-based index (since arrays in C start from 0)
    insertRow--;
    insertCol--;

    // Insert the new element at the specified position
    matrix[insertRow][insertCol] = newElement;

    // Display the updated matrix
    printf("\nThe matrix after insertion is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}













// Deletion in 1D Array

int maiiiiiin() {
    int arr[100], n, i, pos;

    // Ask the user for the number of elements in the array
    printf("How many elements do you want in the array? ");
    scanf("%d", &n);

    // Ask the user to enter the elements of the array
    printf("Please enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the current array
    printf("\nThe current array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask the user for the position of the element they want to delete
    printf("\nEnter the position of the element you want to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check if the position is valid
   while (1)
   {
        if (pos < 1 || pos > n) {
            printf("Invalid position! enter  between 1 and %d.\n", n);
            printf("\nEnter the position of element you want to delete (1 to %d) - ", n);
            scanf("%d", &pos);
        }
        else{
            break;
        }
   }
   
    // Delete the element by shifting the elements to the left
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array by 1
    n--;

    // Display the array after deletion
    printf("\nThe array after deletion is - ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}




























//Linear Search in Array
int lSearch()
{
   int a[10], item, i,n;
   
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


int main() {
    int rows, cols;
    char target;

    // Ask the user for the number of rows and columns in the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    char matrix[100][100]; // Create a 2D array with a maximum size of 100x100 for characters

    // Prompt the user to enter characters for the array
    printf("Enter the characters of the array (row-wise):\n");
    for (int i = 0; i < rows; i++) { // Loop through each row
        for (int j = 0; j < cols; j++) { // Loop through each column
            printf("Character at row %d, column %d: ", i + 1, j + 1);
            scanf(" %c", &matrix[i][j]); // Input character (notice the space before %c)
        }
    }

    // Ask the user for the character they want to search for
    printf("Enter the character you want to search for: ");
    scanf(" %c", &target); // Input character (notice the space before %c)

    // Perform linear search in the 2D array
    int found = 0; // Variable to track if the target is found
    for (int i = 0; i < rows; i++) { // Loop through each row
        for (int j = 0; j < cols; j++) { // Loop through each column in the current row
            if (matrix[i][j] == target) { // Check if the current character matches the target
                printf("Found '%c' at position (%d, %d)\n", target, i + 1, j + 1);
                found = 1; // Set found to true
            }
        }
    }

    // If the character was not found, notify the user
    if (found == 0) {
        printf("The character '%c' is not in the array.\n", target);
    }

    return 0; // End of the program
}






















//Binary search 

int bSearch(int arr[], int size, int target);

int mmmmain() {
    int size, target;

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


// Function to perform binary search on a 2D array
int bSearch2D(int arr[][100], int rows, int cols, int target) {
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Convert the 1D mid index back into 2D row and column
        int midRow = mid / cols;
        int midCol = mid % cols;

        // Check if the target is found
        if (arr[midRow][midCol] == target) {
            printf("Element %d found at position (%d, %d)\n", target, midRow + 1, midCol + 1);
            return 1;
        }

        // If target is greater, ignore the left half
        if (arr[midRow][midCol] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int maizzn() {
    int rows, cols, target;

    // Input the dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[100][100];  // Declare a 2D array

    // Input the elements of the 2D array (assuming it's sorted)
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input the target element to search for
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Call the binary search function
    int result = bSearch2D(arr, rows, cols, target);

    // If element is not found
    if (result == -1) {
        printf("Element not found in the array\n");
    }

    return 0;
}





































//Linked list

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
























//Circular Linked list 

// Define the node structure
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

// Delete a node by key
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
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
        printf("Node not found.\n");
    }
}

int main() {
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




























// Doubly linkedlist 

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head != NULL) {
        (*head)->prev = newNode;
        newNode->next = *head;
    }
    *head = newNode;
}

// Function to insert a node at the end
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

// Function to delete a node with a specific value
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;

    // Search for the node to be deleted
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    // If the node is not found
    if (temp == NULL) {
        printf("Node with value %d not found.\n", key);
        return;
    }

    // If the node to be deleted is the head
    if (temp == *head) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    } else {
        // Unlink the node from the list
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

// Function to display the list in forward direction
void displayForward(struct Node* head) {
    struct Node* temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to display the list in reverse direction
void displayReverse(struct Node* head) {
    struct Node* temp = head;

    // Move to the last node
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

int main() {
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







