#include <stdio.h>
#include <stdlib.h>

int missing(int a[], int size)
{
  int i, *counter = (int *)calloc(size + 1, sizeof(int));
  for (i = 0; i < size; ++i)
  {
    counter[a[i]] += 1;
  }
  for (i = 1; i <= size; ++i)
    if (!counter[i])
      return i;
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