#include <stdio.h>
#include <stdlib.h>

int maxcount(int a[], int size)
{
  int max = a[0], count = 1, maxCount = 1, i;
  int *counter = (int *)calloc(size, sizeof(int));
  for (i = 0; i < size; ++i)
  {
    counter[a[i]] += 1;
    if (counter[a[i]] > maxCount)
    {
      maxCount = counter[a[i]];
      max = a[i];
    }
  }
  return max;
}

void main()
{
  int i, n, arr[10];
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &arr[i]);
  printf("Max count element %d\n", maxcount(arr, n));
}