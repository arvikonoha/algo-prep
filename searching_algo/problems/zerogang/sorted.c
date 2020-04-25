#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mergesort.h"

void zerosum(int a[], int size)
{
  if (size < 2)
    return;
  int i, j, sum = 0, minfirst = a[0], minsecond = a[size - 1], minsum = abs(minfirst + minsecond);
  int l = 0, r = size - 1;
  while (l <= r)
  {
    sum = abs(a[l] + a[r]);
    if (sum < minsum)
    {
      minsum = sum;
      minfirst = a[l];
      minsecond = a[r];
    }
    else if (a[l] + a[r] > 0)
    {
      r -= 1;
    }
    else if (a[l] + a[r] < 0)
    {
      l += 1;
    }
    else
    {
      break;
    }
  }
  printf("%d + %d = %d", minfirst, minsecond, minsum);
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
  zerosum(a, n);
}