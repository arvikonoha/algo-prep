#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

int median(int a1[], int size1, int a2[], int size2)
{
  int medsize = ((size1 + size2) + (size1 + size2) % 2) / 2; // flooor gaaang!
  int count = 0, i = 0, j = 0;
  while (count < medsize - 1)
  {
    if (a1[i] < a2[j])
      i += 1;
    else
    {
      j += 1;
    }
    count += 1;
  }
  if (a1[i] < a2[j])
    return a1[i];
  else
    return a2[j];
}

void main()
{
  int n, a[10], b[10], m, i;
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
  printf("median %d", median(a, n, b, m));
}