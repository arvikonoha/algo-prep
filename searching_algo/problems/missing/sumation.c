
#include <stdio.h>
#include <stdlib.h>

// kinda useless
int missing(int a[], int size)
{
  int i, sum = 0;

  for (i = 1; i <= size; ++i)
    sum += i;
  for (i = 0; i < size; ++i)
    sum -= a[i];
  return sum;
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