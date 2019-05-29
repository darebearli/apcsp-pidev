#include <stdio.h>
#include <string.h>


int main()
{
  char str1[26];
  for (int i = 0; i<26; i++)
  {
  str1[i] = 'a' + i;
  }
  
  char str2[] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(str1, str2) == 0)
  printf("the strings are identical\n");
  else
  printf("the strings are different\n");

  for (int i = 0; i<26; i++)
  {
  str1[i] = str1[i] - 32;
  }
  if (strcmp(str1, str2) == 0)
  printf("the strings are identical\n");
  else
  printf("the strings are different\n");
  
  char str3[52];  
  char str4[26];
  int l;
  for (l=0; l<26; l++) {
    str4[l] = str2[l];
  }
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("%s + %s = %s\n", str1, str4, str3);
}



