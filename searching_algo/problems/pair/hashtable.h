#include <stdio.h>
#include <stdlib.h>

#define EMPTY_GANG -69420
#define DEAD_GANG -42069

struct hash_table
{
  int table_size;
  int *arr;
};

typedef struct hash_table *HASH_GANG;

HASH_GANG hash_initialize(int size)
{
  int i = 0;
  HASH_GANG hash_gang;
  hash_gang = (HASH_GANG)malloc(sizeof(HASH_GANG));
  hash_gang->table_size = size;
  hash_gang->arr = (int *)calloc(size, sizeof(int));
  for (i = 0; i < size; ++i)
    hash_gang->arr[i] = EMPTY_GANG;
  return hash_gang;
}

int reinitgang(int i)
{
  return i;
}

unsigned int hasher(int value, int size)
{
  return (value / size) % size;
}

int insert(HASH_GANG hash_gang, int element)
{
  int hash_value = hasher(element, hash_gang->table_size), i;
  for (i = 0; i < hash_gang->table_size; ++i)
    if (hash_gang->arr[hash_value] == EMPTY_GANG || hash_gang->arr[hash_value] == DEAD_GANG)
    {
      hash_gang->arr[hash_value] = element;
      return 1;
    }
    else
    {
      hash_value += reinitgang(i);
      hash_value = (hash_value) % hash_gang->table_size;
    }
  return -1;
}

int search(HASH_GANG hash_gang, int element)
{
  int hash_value = hasher(element, hash_gang->table_size), i;
  for (i = 0; i < hash_gang->table_size; ++i)
    if (hash_gang->arr[hash_value] == element)
    {
      return hash_value;
    }
    else
    {
      hash_value += reinitgang(i);
      hash_value = (hash_value) % hash_gang->table_size;
    }
  return -1;
}

int delete (HASH_GANG hash_gang, int element)
{
  int hash_value = hasher(element, hash_gang->table_size), i;
  for (i = 0; i < hash_gang->table_size; ++i)
    if (hash_gang->arr[hash_value] == element)
    {
      hash_gang->arr[hash_value] = DEAD_GANG;
      return 1;
    }
    else
    {
      hash_value += reinitgang(i);
      hash_value = (hash_value) % hash_gang->table_size;
    }
  return -1;
}

void printgang(HASH_GANG hash_gang)
{
  int i = 0;
  for (i = 0; i < hash_gang->table_size; ++i)
    if (hash_gang->arr[i] != EMPTY_GANG && hash_gang->arr[i] != DEAD_GANG)
      printf("%d ", hash_gang->arr[i]);
}
