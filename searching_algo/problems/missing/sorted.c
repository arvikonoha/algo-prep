#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

int missing(int a[], int size)
{
  int mid, beg = 0, end = size - 1;
  while (beg <= end)
  {
    mid = (beg + end) / 2;
    if (a[mid] != mid + 1 && a[mid - 1] == mid)
      return mid + 1;
    else if (a[mid] == mid + 1)
    {
      beg = mid - 1;
    }
    else
    {
      beg = mid + 1;
    }
  }
  return 0;
}

void main()
{
  int n, a[10], i;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  mergesort(a, n);
  printf("The missing number is %d", missing(a, n));
}