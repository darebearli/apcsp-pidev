
#include <stdio.h>

float area(float r){

return r * r * 3.14;


}
int main(int argc, char* argv[]){
  float n1;
  float n2;
   char input[256], name[256];
  printf("Type in a radius between 3.5 and 12.5");
  printf("Type 1st radius \n");
  fgets(input, 256, stdin);
   sscanf(input, "%f", &n1);
 printf("Type second radius \n");
 fgets(input, 256, stdin);
  sscanf(input, "%f", &n2);
  
  float n;
  for (n=n1; n<=n2; n++)
  {
    float y;
    y = area(n);
    printf("the area of radius %f is %f\n", n, y);
  } 
}
