#include <stdio.h>

int majority(int a[], int size)
{
  int majindex = 0, count = 1, i;
  for (i = 1; i < size; ++i)
  {
    if (a[i] == a[majindex])
      count += 1;
    else
      count -= 1;
    if (count == 0)
    {
      majindex = i;
      count = 1;
    }
  }
  count = 0;
  for (i = 0; i < size; ++i)
    if (a[majindex] == a[i])
      count += 1;
  if (count > size / 2)
    return a[majindex];
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