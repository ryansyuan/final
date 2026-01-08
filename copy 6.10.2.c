#include <stdio.h>
struct card{
  char* face;
  char* suit;
};
int main(void){
  struct card A;
  struct card* ptr;
  A.face = "ace";
  A.suit = "spade";
  ptr = &A;
  printf("%s%s%s\n%s%s%s\n%s%s%s", A.face, "of", A.suit,
    ptr->face, "of", ptr->suit,
    (*ptr).face, "of", (*ptr).suit);
  return 0;
}
