#include <stdio.h>

void reverse(int *arr, int n)
{
  for (int i = 0, j = n - 1; i < j; ++i, --j)
    arr[i] ^= arr[j] ^= arr[i] ^= arr[j];
}

void rotateKPlease(int arr[], int n, int k)
{
  reverse(arr, k);
  reverse(&arr[k], n - k);
  reverse(arr, n);
}

void printArray(int a[], int count)
{
  printf("Content of the array\n");
  for (int i = 0; i < count; ++i)
    printf("%d ", a[i]);
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
  printf("Enter the number of elements to left shift\n");
  scanf("%d", &key);
  rotateKPlease(arr, n, key);
  printArray(arr, n);
}