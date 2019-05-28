#include <stdio.h>

float area(float r){

return r * r * 3.14;


}
int main(){

  float n;
  for (n=3.5; n<=12.5; n++)
  {
    float y;
    y = area(n);
    printf("the area of radius %f is %f\n", n, y);
  } 
}


