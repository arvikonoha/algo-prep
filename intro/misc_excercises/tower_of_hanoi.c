#include <stdio.h>

void toi(int n, char src, char temp, char dest)
{
  if (n < 1)
    return;
  toi(n - 1, src, dest, temp);
  printf("%d moved from %c to %c\n", n, src, dest);
  toi(n - 1, temp, src, dest);
}

void main()
{
  toi(3, 'A', 'B', 'C');
}