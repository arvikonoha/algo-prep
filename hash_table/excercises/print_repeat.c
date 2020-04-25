#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

void printrepeat(int nums[], int n)
{
  int i = 0;
  HASH_GANG hg = hash_initialize(n);

  for (i = 0; i < n; ++i)
    if (search(hg, nums[i]) != -1)
      printf("%d ", nums[i]);
    else
      insert(hg, nums[i]);
}

void main()
{
  int n, i = 0;
  int nums[10];
  printf("Enter the array size\n");
  scanf("%d", &n);
  for (i = 0; i < n; ++i)
    scanf("%d", &nums[i]);
  printrepeat(nums, n);
}