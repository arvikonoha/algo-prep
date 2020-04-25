#include <stdio.h>

int majority(int a[], int size)
{
  int i, j, max = a[0], maxcount = 1, count = 1;
  for (i = 0; i < size - 1; ++i)
  {
    for (j = i + 1; j < size; ++j)
    {
      if (a[i] == a[j])
      {
        count += 1;
        if (count > maxcount)
        {
          max = a[i];
          maxcount = count;
        }
      }
    }
    count = 1;
  }
  if (maxcount > size / 2)
    return max;
  else
    return 0;
}

void main()
{
  int i, n, arr[10];
  printf("Enter the number of elements in the array\n");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; ++i)
    scanf("%d", &arr[i]);
  printf("Majority element %d\n", majority(arr, n));
}