#include <stdio.h>

int maxima(int a[], int size)
{
  if (size < 3)
    return -1;
  int left = 0, right = size - 1, mid, maxfound = 0;
  while (left <= right)
  {
    mid = (left + right) / 2;
    if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
    {
      maxfound = 1;
      break;
    }
    else if (a[mid] < a[mid + 1] && a[mid] > a[mid - 1])
    {
      left += 1;
    }
    else if (a[mid] < a[mid - 1] && a[mid + 1] < a[mid])
    {
      right -= 1;
    }
    else
      break;
  }
  if (maxfound)
    return a[mid];
  else
  {
    return -1;
  }
}

void main()
{
  int n, a[10], i;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
  printf("maxima of the given array %d", maxima(a, n));
}