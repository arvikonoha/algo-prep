#include <stdio.h>
#include <stdlib.h>

int *seperate(int a[], int size)
{
  int *narr = (int *)calloc(size, sizeof(int));
  int start = 0, end = size - 1;
  int i;
  for (i = 0; i < size; ++i)
    if (a[i] % 2)
      narr[end--] = a[i];
    else
      narr[start++] = a[i];
  return narr;
}

void main()
{
  int n, a[10], i, key;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  int *narr = seperate(a, n);
  for (i = 0; i < n; ++i)
    printf("%d ", *(narr + i));
}