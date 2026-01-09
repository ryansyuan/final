#include<stdlib.h>
#include<stdio.h>

int main(){
  FILE* fptr;
  char ch;
  int count = 0;

  fptr = fopen("welcome.txt", "r");
  if(fptr != NULL)
  {
    while((ch = getc(fptr)) != EOF)
    {
      printf("%c", ch);
      count++;
    }
    fclose(fptr);
    printf("\ntotal %d", count);
  }  
  else
    printf("error\n");
  system("pause");
  return 0;
}
