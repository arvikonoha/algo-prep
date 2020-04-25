#include <stdio.h>

void main()
{
  struct coords
  {
    int x;
    int y;
  } p;
  p.x = 10;
  p.y = 20;
  printf("(x,y) = (%d,%d)\n", p.x, p.y);
  printf("Size -> %d", sizeof(p));
}