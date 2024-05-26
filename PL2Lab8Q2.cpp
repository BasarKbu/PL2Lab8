#include<stdio.h>
#include<stdlib.h>

//Takes an array and sorts the array according to the bubble sort.
void Bubble_Sort(int* A, int length) {
    int m, n;

    for (m = 0; m < length; m++) {
        for (n = 0; n < length - m - 1; n++) { 
            if (A[n] > A[n + 1]) {
                int temp = A[n + 1];
                A[n + 1] = A[n];
                A[n] = temp; 
            }
        }
    }
}

int main() {
    int size, i, j;
    printf("Enter the size: \n");
    scanf("%d", &size);
    int* arr = (int*)malloc(size * sizeof(int));

    for (i = 0; i < size; i++) {
        printf("%d. element is: ", i + 1);
        scanf("%d", &arr[i]);
    }

    Bubble_Sort(arr, size);
    printf("Sorted version of the array. \n");
    printf("\n \n");

    for (j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }

    free(arr); 

    return 0;
}
