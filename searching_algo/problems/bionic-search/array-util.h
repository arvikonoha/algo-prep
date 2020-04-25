#include <stdio.h>

int binary_search(int arr[], int start, int count, int key, int incr)
{
  int left = start, right = count - 1;
  int mid;

  while (left <= right)
  {
    mid = (left + right) / 2;

    if (*(arr + mid) == key)
      return mid;
    else if (key > *(arr + mid))
    {
      if (incr)
        left = mid + 1;
      else
        right = mid - 1;
    }
    else
    {
      if (!incr)
        left = mid + 1;
      else
        right = mid - 1;
    }
  }

  return -1;
}
