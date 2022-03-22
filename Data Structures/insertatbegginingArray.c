#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[4]={2,3,4,5};
int i;
for(i = 4; i >= 0; i--)
{
arr[i+1] = arr[i];
}
arr[0] = 1;
i++;
printf("%d",arr[i]);
}

