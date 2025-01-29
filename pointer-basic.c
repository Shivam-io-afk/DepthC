#include <stdio.h>
#include <stdlib.h>


void swapped(int *p,int *q);
void display(int *val,int total);
void input(int *ptr,int size);


int main()
{
    int a,b;
    printf("Enter Two Values - ");
    // scanf("%d %d",&a,&b);
    // swapped(&a,&b);
    // printf("%d %d\n",a,b);



    int k[10];
    input(k,10);
    display(k,10);
    return 0;
}



//Swapping By Pointer
void swapped(int *p,int *q){
    int c;
    c = *p;
    *p = *q;
    *q = c;

}




void input(int *ptr,int size){  
    printf("Enter %d Numbers one by one - ",size);

    for(int i = 0; i < size; i++){
        scanf("%d",ptr+i);
    }
}




void display(int *ptr,int size){
    printf("Total %d values is - ",size);

    for (int i = 0; i < size; i++){
        printf("%d ",*(ptr + i));
    }
    
}










/*Array to Pointer -->*/








// Quick Sort ---------
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number that you want to insert =  ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements - \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore Sorting - \n");
    displayArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("\nAfter Sorting - \n");
    displayArray(arr, n);

    return 0;
}







// Heap Sort ----

void heapify(int arr[], int n, int i) {
    int largest = i;        
    int left = 2 * i + 1;    
    int right = 2 * i + 2;   

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest); 
    }
}

void heapSort(int arr[], int n) {
    //  max heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;  

        heapify(arr, i, 0);
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore Sorting:\n");
    displayArray(arr, n);

    heapSort(arr, n);

    printf("\nAfter Sorting:\n");
    displayArray(arr, n);

    return 0;
}
