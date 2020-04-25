#include <stdio.h>

#include <stdio.h>

int sum(int arr[], int count)
{
  int maxGlobal = 0, maxLocal = 0;
  for (int i = 0; i < count; i++)
  {
    maxLocal += arr[i];
    if (maxLocal < 0)
      maxLocal = 0;
    if (maxGlobal < maxLocal)
      maxGlobal = maxLocal;
  }
  return maxGlobal;
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
  printf("Greatest sum of continuous subarray of elements is %d\n", sum(arr, n));
}