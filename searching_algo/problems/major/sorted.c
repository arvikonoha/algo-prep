#include <stdio.h>
#include "mergesort.h"

int majority(int a[], int size)
{
  int i, max = a[0], count = 0, candidate = a[size / 2];
  for (i = 0; i < size; ++i)
  {
    if (a[candidate] == a[i])
      count += 1;
  }
  if (count > size / 2)
    return candidate;
  else
    return 0;
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
  printf("Majority element %d\n", majority(arr, n));
}