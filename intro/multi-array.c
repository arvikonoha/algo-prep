#include <stdio.h>

void printValues(int *arr[], int row, int col)
{
  printf("Content of array is\n");
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; j++)
    {
      printf("%d ", *(arr + (i * col) + j));
    }
}

void printAddressValues(int *arr[], int row, int col)
{
  printf("Content of array is\n");
  for (int i = 0; i < row; ++i)
    for (int j = 0; j < col; j++)
    {
      printf("%d -> %d ", (arr + i * col + j), *(arr + (i * col) + j));
    }
}

void main()
{
  int a[2][4], count = 0;

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 4; ++j)
      a[i][j] = count++;

  printValues((int **)a, 2, 4);
  printAddressValues((int **)a, 2, 4);
}