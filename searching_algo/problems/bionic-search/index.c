#include <stdio.h>
#include "findmax.h"
#include "array-util.h"

int bio_src(int arr[], int n, int key)
{
  int max = maxima(arr, n);

  if (max == -1)
    return -1;
  int k = binary_search(arr, 0, max + 1, key, 1);
  if (k != -1)
    return k;

  return binary_search(arr, max + 1, n, key, 0);
}

void main()
{
  int n, arr[40], key, index;
  printf("Enter the number of elements sorted\n");
  scanf("%d", &n);
  printf("Enter the elements\n");
  for (int i = 0; i < n; ++i)
    scanf("%d", &arr[i]);
  printf("Enter the element to be searched\n");
  scanf("%d", &key);
  index = bio_src(arr, n, key);
  if (index == -1)
    printf("%d is not found\n", key);
  else
    printf("%d is found at index %d\n", key, index);
}