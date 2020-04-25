#include <stdio.h>
#include <stdlib.h>

int missing(int a[], int size)
{
  int i = 0, j = 0, found = 0;
  for (i = 1; i <= size; ++i)
  {
    found = 0;
    for (j = 0; j < size; ++j)
    {
      if (a[j] == i)
      {
        found = 1;
      }
    }
    if (!found)
      return i;
    else
      found = 0;
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
  printf("The missing number is %d", missing(a, n));
}