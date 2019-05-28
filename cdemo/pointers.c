#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  float d = 4.2;
  float e = 9.4;
float* ptrtod;
float* ptrtoe;

ptrtod = &d;
ptrtoe = &e;  

*ptrtod = 3.5;
*ptrtoe = 6.7;

printf("The value of d is %f\n", d);
printf("d is located in %f\n", &d);
printf("ptrtod is equal to %f\n", ptrtod);

printf("The value of e is %f\n", e);
printf("e is located in %f\n", &e);
printf("ptrtoe is equal to %f\n", ptrtoe);

float t;

t = d;
d = e;
e = t;
printf("d = %f\n", d);
printf("e = %f\n", e);      

}

