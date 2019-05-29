    
#include <stdio.h>
#include <string.h>
#include "student.h"

void printstudent(struct Student* student)
{
  printf("First Name is %s\n", student->firstname);
  printf("Last Name is %s\n", student->lastname);
  printf("Age is %d\n", student->age);
  printf("Student ID is %d\n", student->id);  
}

