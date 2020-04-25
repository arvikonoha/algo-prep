#include <stdio.h>
#include <stdlib.h>

int maxcount(int a[], int size)
{
  int max = a[0], count = 1, maxCount = 1, i, j;
  for (i = 0; i < size - 1; ++i)
  {
    for (j = i + 1; j < size; ++j)
      if (a[i] == a[j])
        count += 1;
    if (count > maxCount)
    {
      maxCount = count;
      max = a[i];
    }
    count = 1;
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