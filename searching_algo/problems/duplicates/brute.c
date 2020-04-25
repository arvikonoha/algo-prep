#include <stdio.h>
#include <stdlib.h>

void duplicate_print(int arr[], int size)
{
  int i, j;
  for (i = 0; i < size - 1; ++i)
    for (j = i + 1; j < size; ++j)
      if (arr[i] == arr[j])
      {
        printf("%d ", arr[i]);
        break;
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
  duplicate_print(arr, n);
}