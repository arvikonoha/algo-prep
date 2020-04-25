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

void main()
{
  int n, arr[30];
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the array elements in sorted order\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int key;
  printf("Enter the key to search\n");
  scanf("%d", &key);
  int index = binary_search(arr, n, key);
  if (index != -1)
    printf("%d found at position %d\n", key, index);
  else
    printf("%d is not found\n", key);
}