#include <stdio.h>

int linear_search(int arr[], int n, int key)
{
  int i;
  for (i = 0; i < n; ++i)
    if (arr[i] == key)
      return i;
  return -1;
}

void main()
{
  int n, arr[40], key, index;
  printf("Enter the number of elements\n");
  scanf("%d", &n);
  printf("Enter the elements\n");
  for (int i = 0; i < n; ++i)
    scanf("%d", &arr[i]);
  printf("Enter the element to be searched\n");
  scanf("%d", &key);
  index = linear_search(arr, n, key);
  if (index == -1)
    printf("%d is not found\n", key);
  else
    printf("%d is found at index %d\n", key, index + 1);
}