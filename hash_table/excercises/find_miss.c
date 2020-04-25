#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

int findmiss(int nums[], int n)
{
  int i = 0;
  HASH_GANG hg = hash_initialize(n);
  while (i < n)
  {
    insert(hg, nums[i]);
    i += 1;
  }
  for (i = 1; i <= n; ++i)
    if (search(hg, i) == -1)
      return i;
  return -1;
}

void main()
{
  int n, i = 0;
  int nums[10];
  printf("Enter the array size\n");
  scanf("%d", &n);
  for (i = 0; i < n; ++i)
    scanf("%d", &nums[i]);

  printf("Missed gang member %d\n", findmiss(nums, n));
}