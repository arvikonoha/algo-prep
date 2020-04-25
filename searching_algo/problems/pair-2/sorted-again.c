#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"
#include "binarysearch.h"

void pair(int a1[], int size1, int a2[], int size2, int value)
{
  int left = 0, right = size2 - 1;
  while (left < size1 && right >= 0)
  {
    if (value == a1[left] + a2[right])
    {
      printf("%d + %d = %d", a1[left], a2[right], value);
      return;
    }
    else if (value > a1[left] + a2[right])
    {
      left += 1;
    }
    else
      right -= 1;
  }
  return;
}

void main()
{
  int n, a[10], b[10], m, i, value;
  printf("Enter the number of elements (1)\n");
  scanf("%d", &n);
  printf("Enter the array elements (1)\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);

  printf("Enter the number of elements (2)\n");
  scanf("%d", &m);
  printf("Enter the array elements (2)\n");
  for (i = 0; i < m; ++i)
    scanf("%d", &b[i]);

  mergesort(b, m);
  mergesort(a, n);
  printf("Enter the value ");
  scanf("%d", &value);
  pair(a, n, b, m, value);
}