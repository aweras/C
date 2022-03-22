#include <stdio.h>
#include <stdlib.h>

int firstIndex = 0;
int lastIndex = 8;

void binarySearch(int *arr, int size, int item) {
	int midValue = (firstIndex + lastIndex) / 2;
	
	if (arr[midValue] == item) {
		printf("%i found!", item);
	} else if (item < arr[midValue]) {
		lastIndex = midValue;
		binarySearch(arr, size, item);
	} else if (item > arr[midValue]) {
		firstIndex = midValue;
		binarySearch(arr, size, item);
	} else {
		printf("Not found!");
	}
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	binarySearch(arr, 8, 3);
	
	return 0;
}
