#include<stdio.h>
#include<stdlib.h>
#define MAX 80

int main(void){
  FILE* fptr;
  int i;
  fptr = fopen("output.txt", "r");

  while(!feof(fptr))
{
    i = fread(str, sizeof(char), MAX-1, fptr);
    str[i] = '\0';
    printf("%s\n", str);
}
  fclose(fptr);
  system("pause");
  return 0;
}
