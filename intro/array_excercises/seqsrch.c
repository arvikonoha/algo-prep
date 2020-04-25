#include <stdio.h>

int sequential_search(int arr[], int count, int key)
{

  for (int i = 0; i < count; i++)
  {
    if (key == arr[i])
      return i;
  }
  return -1;
}

void main()
{
  int n, arr[30];
  printf("Enter the size of the array\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int key;
  printf("Enter the key to search\n");
  scanf("%d", &key);
  int index = sequential_search(arr, n, key);
  if (index != -1)
    printf("%d found at position %d\n", key, index);
  else
    printf("%d is not found\n", key);
}