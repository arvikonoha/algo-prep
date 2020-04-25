#include <stdio.h>
#include <stdlib.h>

void pair(int a[], int size, int value)
{
  int i, j;
  for (i = 0; i < size - 1; ++i)
  {
    for (j = i + 1; j < size; ++j)
      if (value == a[i] + a[j])
      {
        printf("%d + %d = %d", a[i], a[j], value);
        return;
      }
  }
}

void main()
{
  int n, a[10], i, value;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  printf("Enter the value ");
  scanf("%d", &value);
  pair(a, n, value);
}