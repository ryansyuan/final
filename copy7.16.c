#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80

int main(void){
  FILE* fptr;
  char str[MAX], ch;
  fptr = fopen("output.txt", "a");
  printf("input numeber, press enter to end input\n");
  while((ch = getche())  != ENTER&& i < MAX)
    str[i++] = ch;
  putc('\n', fptr);
  fwrite(str, sizeof(char), i, fptr);
  fclose(fptr);\
  printf("\nfinished appending\n");
  system("pause");
  return 0;
}
