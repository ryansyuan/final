#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char num[7];
  char class[20];
  char name[20];
  int score[3];
}student;

void sub(student* p);

int main(){
  int i;
  student stud[3] = {
{"970101", "shi", "apple", 61, 71, 81}, {"970102", "shi", "banana", 92, 82, 87},{"970103", "shi", "car", 73, 83, 93}
};
  student* ps;
  ps = stud;
    
    printf("\n");
    printf("=======================================\n");
    printf(" 學號     班級    姓名   國文   英文   數學\n");
    printf("=======================================\n");

    for(i = 0; i<3; i++){
    printf("%6s %-10s %-8s %4d %4d %4d\n", 
      (ps+i)->num, (ps+i)->class, (ps+i)->name, (ps+i)->score[0],(ps+i)->score[1],(ps+i)->score[2]
      );
    }
    printf("\n");
   
    sub(ps);
    
    for(i = 0; i<3; i++){
    printf("%6s %-10s %-8s %4d %4d %4d\n", 
      (ps+i)->num, (ps+i)->class, (ps+i)->name, (ps+i)->score[0],(ps+i)->score[1],(ps+i)->score[2]
      );
    }

printf("\n\n");
system("pause");
return (0);
}

void sub(student* p){
  for ( int i = 0; i <3; i++){
    (p+i)->score[0] += 10;
    (p+i)->score[1] += 10;
    (p+i)->score[2] += 10;
  }
}
