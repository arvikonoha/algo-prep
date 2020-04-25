#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

void pair(int a[], int size, int value)
{
  int i, element;
  HASH_GANG hg = hash_init(size);
  for (i = 0; i < size; ++i)
    if ((element = find(hg, value - a[i])) != -1)
    {
      printf("%d + %d = %d", a[element], a[i], value);
      return;
    }
    else
    {
      insert(hg, a[i]);
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