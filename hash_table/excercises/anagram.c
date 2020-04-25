#include <stdio.h>
#include <string.h>
#include "hashtable.h"

int anagram(char str1[], char str2[])
{
  int i = 0;
  if (strlen(str1) != strlen(str2))
    return 0;
  HASH_GANG hg = hash_initialize(strlen(str1));
  for (i = 0; i < strlen(str1); ++i)
    insert(hg, str1[i]);

  for (i = 0; i < strlen(str2); ++i)
  {
    if (delete (hg, str2[i]) == -1)
      return 0;
  }
  return 1;
}

void main()
{
  char str1[10], str2[10];
  printf("Enter the strings ");
  scanf("%s %s", str1, str2);
  if (anagram(str1, str2))
    printf("Anagram gang\n");
  else
    printf("No");
}