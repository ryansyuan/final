#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct card{
  const char* face;
  const char* suit;
};
typedef struct card CARD;

void filldeck(CARD* const wdeck, const char* wface[], const char* wsuit[]);
void shuffle(CARD* const deck);
void deal(CARD* const deck);

int main(void){
  CARD deck[52];
  const char* face[] = {"ace", "deuce", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};
  const char* suit[] = {"hearts", "diamonds", "clubs", "spades"};
  srand(time(NULL));
  filldeck(deck, face, suit);
  shuffle(deck);
  deal(deck);
  return 0;
}

void filldeck(CARD* const wdeck, const char* wface[], const char* wsuit[]){
  int i;
  for(i = 0; i<=51; i++){
    wdeck[i].face = wface[i % 13];
    wdeck[i].suit = wsuit[i / 13];
  }
}

void shuffle(CARD* const wdeck){
  int i;
  int j;
  CARD temp;
  for(i = 0; i<=51; i++){
    j = rand() % 52;
    temp = wdeck[i];
    wdeck[i] = wdeck[j];
    wdeck[j] = temp;
  }
}

void deal(CARD* const wdeck){
  int i;
  for(i = 0; i<=51; i++){
    printf("%5s of %-8s%s",
      wdeck[i].face, wdeck[i].suit, (i + 1) % 4 ? "      ":"\n");
  }
}
