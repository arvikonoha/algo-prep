#include <stdio.h>
#include <stdlib.h>

void stocks(int a[], int size)
{
  int i, j, buy = a[0], currmin = 0, sell = a[size - 1], profit = sell - buy, currprof = profit;
  for (i = 0; i < size; ++i)
  {
    if (a[i] < a[currmin])
      currmin = i;
    currprof = a[i] - a[currmin];
    if (currprof > profit)
    {
      buy = a[currmin];
      sell = a[i];
      profit = sell - buy;
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