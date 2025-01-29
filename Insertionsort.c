#include <stdio.h>
#include <stdlib.h>




void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
    }
}

void display(int arr[], int n) {
    printf("Array - ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter Number of elements  - ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements - \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray Before - \n");
    display(arr, n);

    insertionSort(arr, n);

    printf("\nArray After Sorting - \n");
    display(arr, n);

    return 0;
}





