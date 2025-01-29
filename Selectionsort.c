#include <stdio.h>
#include <stdlib.h>




void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

void displayArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of element - ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements - \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore Sorting - \n");
    displayArray(arr, n);

    selectionSort(arr, n);

    printf("\nAfter Sorting - \n");
    displayArray(arr, n);

    return 0;
}


