#include <stdio.h>
#include <stdlib.h>

struct Person{
  char name[8];
  int gender;
  int age;
};
typedef struct Person per;
int main(void){
  per p;
  printf("Please input ur name:");
  scanf("%7s", p.name);
  printf("Please input ur gender:");
  scanf("%d", &p.gender);
  printf("Please input ur age:");
  scanf("%d", &p.age);
  printf("Hi %s\n", p.name);
  if(p.gender==0)
    printf("u r %d year-old woman.\n", p.age);
  else
    printf("u r %d year old man.\n", p.age);
  system("pause");
  return 0;
}
