#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'z';
  float c = 12.345;
  double d = 123.456;
  unsigned int e = 400;
  unsigned int f = 32;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned int e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("unsigned int f value: %d and size: %d bytes\n", f, sizeof(f));
}

