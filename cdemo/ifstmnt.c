
#include <stdio.h>

int main()
{
  int a = 0;
  int b = 2;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is equal to 0\n");
  }
  else
  {
    printf("a is not equal 0\n");
  }
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is smaller than b\n");
  }
  if (a >= b)
  {
    printf("a greater than or equal to b\n");
  }
  else
  {
    printf("a is smaller than  b\n");
  }
    if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  else
  {
    printf("a and b are not both equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("either a or b is equal to 0\n");
  }
  else
  {
    printf("neither a nor b is equal to 0\n");
  } 
  if (!(a==0))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
    printf("a is equal to 0\n");
  } 
}
