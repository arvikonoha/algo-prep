#include<stdio.h>

void printArray(int a[],int count){
  printf("Content of the array\n");
  for(int i=0;i<count;++i)
    printf("%d ",a[i]);
}

void printArraywithAddress(int a[],int count)
{
  printf("Array with address\n");
  for(int i=0;i<count;++i)
    printf("%d %d ",a[i],a+i);
}
int main(){
  int a[10];
  for(int i=0;i<10;++i)
    a[i] = i;
  printArraywithAddress(a,10);
}