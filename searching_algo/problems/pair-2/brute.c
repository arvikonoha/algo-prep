#include <stdio.h>
#include <stdlib.h>

void pair(int a1[], int size1, int a2[], int size2, int value)
{
  int i, j;
  for (i = 0; i < size1; ++i)
  {
    for (j = 0; j < size2; ++j)
      if (value == a1[i] + a2[j])
      {
        printf("%d + %d = %d", a1[i], a2[j], value);
        return;
      }
  }
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

  printf("Enter the value ");
  scanf("%d", &value);
  pair(a, n, b, m, value);
}