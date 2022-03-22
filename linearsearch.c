#include <stdio.h>
#include <stdlib.h>

void linearSearch(int *arr, int item) {
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] == item) {
			printf("%i was found at index %i", arr[i], i);
			break;
		} else if (i == size - 1 && arr[i] != item) {
			printf("%i was not found!", item);
		}
	}
}

int main() {
	int arr[] = {1, 7, 5, 3, 8, 9, 2, 6};
	
	linearSearch(arr, 8);
	
	return 0;
}
