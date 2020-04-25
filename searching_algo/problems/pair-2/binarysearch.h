#include <stdio.h>

int binary_search(int arr[], int count, int key)
{
  int left = 0, right = count - 1;
  int mid;
  while (left <= right)
  {
    mid = (left + right) / 2;
    if (arr[mid] == key)
      return mid;
    else if (key > arr[mid])
    {
      left = mid + 1;
    }
    else
    {
      right = right - 1;
    }
  }

  return -1;
}