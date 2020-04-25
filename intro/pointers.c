#include<stdio.h>
void main(){
  int var = 100;
  int *p;
  p = &var;
  printf("The values stored in the variable %d\n",var);
  printf("The value stored at pointer location %d\n",*p);
  printf("The address of the variable %d\nThe address stored in the pointer%d\n",&var,p);
}