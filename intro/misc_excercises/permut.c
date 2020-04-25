#include <stdio.h>

void swap(int *i, int *j)
{
  int temp = *i;
  *i = *j;
  *j = temp;
}

void printArray(int a[], int length)
{
  printf("\n");
  for (int i = 0; i < length; ++i)
    printf("%d ", a[i]);
}

void permutation(int a[], int i, int length)
{
  if (i == length)
  {
    printArray(a, length);
    return;
  }
  for (int j = i; j < length; ++j)
  {
    swap(&a[i], &a[j]);
    permutation(a, i + 1, length);
    swap(&a[i], &a[j]);
  }
}

void main()
{
  int a[5];
  for (int i = 0; i < 5; ++i)
    a[i] = i;
  permutation(a, 0, 5);
}