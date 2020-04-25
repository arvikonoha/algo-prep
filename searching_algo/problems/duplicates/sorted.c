#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

void duplicate_print(int arr[], int size)
{
  int i;
  for (i = 1; i < size; ++i)
  {
    if (arr[i] == arr[i - 1])
      printf("%d ", arr[i]);
  }
}

void main()
{
  int i, n, arr[10];
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &arr[i]);
  mergesort(arr, n);

  duplicate_print(arr, n);
}