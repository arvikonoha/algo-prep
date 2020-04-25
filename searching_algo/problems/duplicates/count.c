#include <stdio.h>
#include <stdlib.h>

void duplicate_print(int arr[], int size)
{
  int i, j, *counter = (int *)calloc(size, sizeof(int));
  for (i = 0; i < size; ++i)
    if (counter[arr[i]] == 1)
      printf("%d ", arr[i]);
    else
      counter[arr[i]] += 1;
}

void main()
{
  int i, n, arr[10];
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &arr[i]);
  duplicate_print(arr, n);
}