#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int n)
{
int i;
for (i = 0; i < n; i++) 
  {
   printf("%d ", arr[i]);
  }
//printf("\n");
}
	 

int main()	
{ 
int arr[3]={1,2,3};
printArray(arr,3);

 
	return 0;
}
