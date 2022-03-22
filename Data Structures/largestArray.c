#include <stdio.h>
#include <stdlib.h>


largest(int arr[], int n)
{
int i;
int max = arr[0];
for (i = 1; i < n; i++)
if (arr[i] > max)
max = arr[i];
printf("%d",max);
return max;
}


int main() 
{
	int arr1[3]={1,1,5};
	largest(arr1,3);
	
	
	return 0;
}
