#include <stdio.h>

int sum(int arr[], int count)
{
  int sum = 0;
  for (int i = 0; i < count; i++)
  {
    sum += arr[i];
  }
  return sum;
}

void main()
{
  int n, arr[30];
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Sum of array elements %d\n", sum(arr, n));
}