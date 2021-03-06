    
#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[40];
  char lastname[40];
  int age;
  int id;
};

void printstudent(struct Student* student)
{
  printf("First Name is %s\n", student->firstname);
  printf("Last Name is %s\n", student->lastname);
  printf("Age is %d\n", student->age);
  printf("Student ID is %d\n", student->id);  
}

int main() {
  struct Student studentArr[50];

  int studentnumber;
  char input[256];
  printf("How many students?");
  fgets(input, 256, stdin);
  sscanf(input, "%d", &studentnumber);

  int count = 0;
  while (count < studentnumber) 
  {
    char first[20];
    printf("What is student name?\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", first);
    strcpy(studentArr[count].firstname, first);

    char last[20];
    printf("Whar is surname?\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", last);
    strcpy(studentArr[count].lastname, last);
    
    int ageInput;
    printf("Enter student age:");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &ageInput);
    studentArr[count].age = ageInput; 

    int idinput;
    printf("Enter student id:");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &idinput); 
    studentArr[count].id = idinput;

    count++; 
  }
  

  for (int f=0; f<studentnumber; f++)
  {
    printstudent(&studentArr[f]);
  }
  return 0;
}
