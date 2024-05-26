#include<stdlib.h>
#include<stdio.h>
//Selection Sort Algorithm
int size;
void Selection_Sort(int A[],int size){
	int j,k;
	int index,smallest;
	
	for(j=0;j<size-1;j++){
		smallest = A[size-1];
		index = size-1;
		for(k=j;k<size-1;k++){
			if(A[k] < smallest){
				smallest = A[k];
				index = k;
			}
		}
		A[index] = A[j];
		A[j] = smallest;
	}
	
	
	
	
	
	printf("Selection sorted version \n \n");
	for(j=0;j<size;j++){
		printf("%d ",A[j]);
	}
	
}

int main() {
    int  i;
    printf("Enter the size: \n");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++) {
        printf("%d. element is: ", i + 1); scanf("%d", &arr[i]);
    }

    Selection_Sort(arr, size);
    
    return 0;
}
