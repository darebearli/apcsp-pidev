#include <stdio.h>

void arrayadd(int arr[], int s, int n)
{
  for (int i=0; i<s; i++) {
    arr[i]=arr[i]+n;
  }
}


int main()
{
  int arr[100];
  
  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
  }

  int s = 100;
  int n = 1;
  arrayadd(arr, s, n);
   
  for (int i = 0; i < 100; i++)
  {
    printf("%d, ", arr[i]);
  }
  printf("\n");
  
}

