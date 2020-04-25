#include <stdio.h>
#include <stdlib.h>
#include "array-util.h"

void seperate(int a[], int size)
{
  int start = 0, end = size - 1;
  while (start < end)
  {
    if (!(a[start] % 2))
    {
      start += 1;
    }
    else if (a[end] % 2)
    {
      end -= 1;
    }
    else
    {
      int temp = a[start];
      a[start] = a[end];
      a[end] = temp;
    }
  }
}

void main()
{
  int n, a[10], i, key;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  mergesort(a, n);
  seperate(a, n);
  for (i = 0; i < n; ++i)
    printf("%d ", a[i]);
}