#include <stdio.h>

void printArray(int *arr[], int count)
{
  int *ptr;
  printf("Content of array\n");
  for (int i = 0; i < count; ++i)
  {
    ptr = (int *)arr[i];
    printf("%d ", *ptr);
  }
}

void printAddressArray(int *arr[], int count)
{
  printf("\nAddress -> value\n");
  int *ptr;
  for (int i = 0; i < count; i++)
  {
    ptr = (int *)arr[i];
    printf("%d %d ", ptr, *ptr);
  }
}

void main()
{
  int var1 = 10, var2 = 11, var3 = 12;
  int *arr[3];
  arr[0] = &var1;
  arr[1] = &var2;
  arr[2] = &var3;
  printArray((int **)arr, 3);
  printAddressArray((int **)arr, 3);
}