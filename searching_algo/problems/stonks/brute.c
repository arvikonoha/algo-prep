#include <stdio.h>
#include <stdlib.h>

void stocks(int a[], int size)
{
  int i, j, buy = a[0], sell = a[size - 1], profit = sell - buy;
  for (i = 0; i < size - 1; ++i)
  {
    for (j = i + 1; j < size; ++j)
      if (a[j] - a[i] > profit)
      {
        buy = a[i];
        sell = a[j];
        profit = a[j] - a[i];
      }
  }
  printf("S.P  C.P  P\n");
  printf("%d - %d = %d", sell, buy, profit);
}

void main()
{
  int n, a[10], i, key;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  stocks(a, n);
}