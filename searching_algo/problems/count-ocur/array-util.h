#include <stdlib.h>

void merge(int a[], int b[], int c[], int p, int q)
{
  int i, j, k;
  for (i = 0, j = 0, k = 0; i < p && j < q; ++k)
    if (b[i] < c[j])
      a[k] = b[i++];
    else
      a[k] = c[j++];
  if (i == p)
    for (; j < q; ++j, ++k)
      a[k] = c[j];
  else
    for (; i < p; ++i, ++k)
      a[k] = b[i];
}

void mergesort(int a[], int size)
{

  if (size > 1)
  {
    int i = 0, j = 0;
    int *b = (int *)malloc((size / 2) * sizeof(int));
    int *c = (int *)malloc((size - size / 2) * sizeof(int));
    for (i = 0; i < size / 2; ++i)
      b[i] = a[i];
    for (j = 0; i < size; ++i, ++j)
      c[j] = a[i];
    mergesort(b, size / 2);
    mergesort(c, j);
    merge(a, b, c, size / 2, j);
  }
}

int findFirstIndex(int a[], int start, int end, int key)
{
  if (start > end)
    return -1;
  int mid = (start + end) / 2;
  if (a[mid] == key && (mid == start || a[mid - 1] != key))
    return mid;
  if (a[mid] <= key)
    return findFirstIndex(a, start, mid - 1, key);
  if (a[mid] > key)
    return findFirstIndex(a, mid + 1, end, key);
}

int findLastIndex(int a[], int start, int end, int key)
{
  if (start > end)
    return -1;
  int mid = (start + end) / 2;
  if (a[mid] == key && (mid == end || a[mid + 1] != key))
    return mid;
  if (a[mid] < key)
    return findLastIndex(a, start, mid - 1, key);
  if (a[mid] >= key)
    return findLastIndex(a, mid + 1, end, key);
}