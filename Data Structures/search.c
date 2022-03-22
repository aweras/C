#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int n, int x)
{
int i;
for (i = 0; i < n; i++)
if (arr[i] == x){
	printf("%d",x);

}
return i;
printf("%d",x);
return -1;
}

int main()
{
	int arr[4]={1,2,3,4};
	search(arr,3,1);
	
	return 0;
}
