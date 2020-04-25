#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *NEXT;
};

typedef struct node *NODE;

struct hash_gang
{
  int table_size;
  NODE *arr;
};

typedef struct hash_gang *HASH_GANG;

HASH_GANG hash_init(int size)
{
  HASH_GANG hg = (HASH_GANG)malloc(sizeof(HASH_GANG));
  int i = 0;
  hg->table_size = size;
  hg->arr = (NODE *)malloc(size * sizeof(NODE));
  for (i = 0; i < size; ++i)
    hg->arr[i] = NULL;
  return hg;
}

unsigned hashed(int value, int size)
{
  return (value / size) % size;
}

void insert(HASH_GANG hg, int value)
{
  int hash = hashed(value, hg->table_size);
  NODE node = (NODE)malloc(sizeof(NODE));
  node->value = value;
  node->NEXT = hg->arr[hash];
  hg->arr[hash] = node;
}

int delete (HASH_GANG hg, int value)
{
  int hash = hashed(value, hg->table_size), i = 0;
  NODE curr = hg->arr[hash];
  if (hg->arr[hash]->value == value)
  {
    hg->arr[hash] = curr->NEXT;
    free(curr);
    return 1;
  }
  NODE next = curr->NEXT;
  while (next)
  {
    if (next->value == value)
    {
      curr->NEXT = next->NEXT;
      free(next);
      return 1;
    }
    curr = next;
    next = next->NEXT;
  }
  return -1;
}

int find(HASH_GANG hg, int value)
{
  int hash = hashed(value, hg->table_size);
  NODE head = hg->arr[hash];
  while (head)
  {
    if (head->value == value)
    {
      return 1;
    }
    head = head->NEXT;
  }
  return 0;
}

void display(HASH_GANG hg)
{
  int i = 0;
  for (i = 0; i < hg->table_size; ++i)
  {
    NODE head = hg->arr[i];
    while (head)
    {
      printf("%d ", head->value);
      head = head->NEXT;
    }
  }
  printf("\n\n");
}

void main()
{
  HASH_GANG hash_gang = hash_init(5);
  insert(hash_gang, 10);
  insert(hash_gang, 20);
  insert(hash_gang, 32);
  printf("Search gang %d\n", find(hash_gang, 41));
  insert(hash_gang, 41);
  insert(hash_gang, 35);
  insert(hash_gang, 44);
  display(hash_gang);
  delete (hash_gang, 32);
  delete (hash_gang, 10);
  display(hash_gang);
}