#include <stdio.h>

typedef struct
{
  int roll_no;
  char *first_name;
  char *last_name;
} STUDENT;

void main()
{
  STUDENT stud;
  STUDENT *stud_ptr = &stud;
  stud_ptr->roll_no = 12;
  stud_ptr->first_name = "Aravind";
  stud_ptr->last_name = "Rao";
  printf("Roll no %d\nName %s %s", stud_ptr->roll_no, stud_ptr->first_name, stud_ptr->last_name);
}