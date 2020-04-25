#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

int maxcount(int a[], int size)
{
  int max = a[0], count = 1, maxCount = 1, i, j;
  for (i = 1; i < size; ++i)
  {
    if (a[i - 1] == a[i])
    {
      count += 1;
      if (count > maxCount)
      {
        maxCount = count;
        max = a[i];
      }
    }
    else
    {
      count = 1;
    }
  }
  return max;
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
  printf("Max count element %d\n", maxcount(arr, n));
}