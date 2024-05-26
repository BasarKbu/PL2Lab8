#include<stdio.h>
#include<stdlib.h>

// This function performs the insertion sort on the array
void Insertion_Sort(int* A, int size) {
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = A[i];
        j = i - 1;

        // Move elements of A[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

int main() {
    int size, i, j;
    printf("Enter the size: \n");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    for (i = 0; i < size; i++) {
        printf("%d. element is: ", i + 1);
        scanf("%d", &arr[i]);
    }

    Insertion_Sort(arr, size);

    printf("Sorted version of the array:\n");
    for (j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    free(arr); // Free the allocated memory

    return 0;
}

