#include <stdio.h>
#include <stdlib.h>

void pair(int a[], int size, int value)
{
  int i, *counter = (int *)calloc(size, sizeof(int));
  for (i = 0; i < size; ++i)
    if (counter[value - a[i]])
    {
      printf("%d + %d = %d", value - a[i], a[i], value);
      return;
    }
    else
    {
      counter[a[i]] += 1;
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