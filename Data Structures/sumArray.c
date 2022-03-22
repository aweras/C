#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int n)
{
int i;
int sum = 0;
for (i = 0; i < n; i++)
sum += arr[i];
printf("%d",sum);
return sum;
}

int main()
{
  int arr1[3]={1,2,3}
  sum(arr1,3);
  
return 0;
}



