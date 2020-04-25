#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zerosum(int a[], int size)
{
  if (size < 2)
    return;
  int i, j, sum = 0, minfirst = a[0], minsecond = a[1], minsum = abs(minfirst + minsecond);
  for (i = 0; i < size - 1; ++i)
  {
    for (j = i + 1; j < size; ++j)
    {
      sum = abs(a[i] + a[j]);
      if (sum < minsum)
      {
        minsum = sum;
        minfirst = a[i];
        minsecond = a[j];
      }
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
  zerosum(a, n);
}