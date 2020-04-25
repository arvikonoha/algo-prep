#include <stdio.h>
#include <stdlib.h>
#include "array-util.h"

int countocur(int a[], int size, int ocur)
{
  int leftindex = findFirstIndex(a, 0, size - 1, ocur);
  int rightindex = findLastIndex(a, 0, size - 1, ocur);
  return (rightindex - leftindex + 1);
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
  printf("Enter the element whose occurance is to be count\n");
  scanf("%d", &key);
  printf("Count of %d in the array is %d\n", key, countocur(a, n, key));
}