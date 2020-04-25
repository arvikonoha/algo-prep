#include <stdio.h>

void printInt(unsigned int num)
{
  char *convention = "0123456789ABCDEF";
  char digit = (num % 16);
  if (num)
  {
    printInt(num / 16);
    printf("%c", convention[digit]);
  }
}

void main()
{
  printInt(45);
}