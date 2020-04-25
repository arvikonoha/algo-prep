#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

void norepeat(int nums[], int n)
{
  int ends = 0, curr = 0;
  HASH_GANG hashgang = hash_initialize(n);
  while (curr < n)
  {
    if (search(hashgang, nums[curr]) == -1)
    {

      nums[ends++] = nums[curr];
      insert(hashgang, nums[curr]);
    }
    curr += 1;
  }
  nums[ends] = '\0';
}

void main()
{
  int n, i = 0;
  int nums[10];
  printf("Enter the array size\n");
  scanf("%d", &n);
  for (i = 0; i < n; ++i)
    scanf("%dx", &nums[i]);
  norepeat(nums, n);
  printf("No repeat gang\n");
  for (i = 0; i < n && nums[i] != '\0'; ++i)
    printf("%d ", nums[i]);
}