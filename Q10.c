#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr_size, *arr, max, min;

	printf("\nEnter size of the array: ");
	scanf("%d", &arr_size);

	arr = (int*) calloc(arr_size, sizeof(int));

	printf("\nEnter the array: ");
	for(int i = 0; i < arr_size; i++) {
		scanf("%d", (arr+i));
	}

	printf("\nThe array is: ");
	for(int i = 0; i < arr_size; i++) {
		(i != arr_size - 1) ? printf("\t%d", *(arr+i)) : 		printf("\t%d\n", *(arr+i));
	}

	max = arr[0];
	for(int i = 0; i < arr_size; i++) {
		if(max > arr[i]) {
			max = arr[i];
		}
	}

	min = arr[0];
	for(int i = 0; i < arr_size; i++) {
		if(min < arr[i]) {
			min = arr[i];
		}
	}

	printf("\nMaximum and minimum numbers in the array are: %d, %d\n", max, min);
}

