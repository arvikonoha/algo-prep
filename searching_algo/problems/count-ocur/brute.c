#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int countocur(int a[], int size, int ocur)
{
  int i, j, count = 0;
  for (i = 0; i < size; ++i)
  {
    if (ocur == a[i])
      count += 1;
  }
  return count;
}

void main()
{
  int n, a[10], i, key;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  printf("Enter the element whose occurance is to be count\n");
  scanf("%d", &key);
  printf("Count of %d in the array is %d\n", key, countocur(a, n, key));
}