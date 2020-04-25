#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

void pair(int a[], int size, int value)
{
  int i, left = a[0], right = a[size - 1];
  while (left <= right)
  {
    if (a[left] + right == value)
    {
      printf("%d + %d = %d", a[left], a[right], value);
      return;
    }
    else if (value > a[left] + a[right])
    {
      left += 1;
    }
    else
    {
      right -= 1;
    }
  }
}

void main()
{
  int n, a[10], i, value;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  mergesort(a, n);
  printf("Enter the value ");
  scanf("%d", &value);
  pair(a, n, value);
}