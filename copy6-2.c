#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int year, month, day;
}dates;
typedef struct{
  char num[11];
  dates date;
  int amount;
}Order;

int main(void)
{
    Order ord1 = { "UN4521555",{2020, 4, 11}, 11111 };
    Order ord2 = { "US0A81025",{2015, 5, 20}, 54530 };
    Order ord3 = { "UN0BA1028",{2020, 8, 7}, 663613 };

    printf("    ******************************\n");
    printf("    *        訂單資料            *\n");
    printf("    ******************************\n");

    printf("---------------------------------------------------\n");
    printf("   訂單編號         訂單日期         訂單金額\n");
    printf("---------------------------------------------------\n");

    printf("%-10s %4d/%02d/%02d   NT$%10d\n",
        ord1.num, ord1.date.year, ord1.date.month, ord1.date.day, ord1.amount);

    printf("%-10s %4d/%02d/%02d   US$%10d\n",
        ord2.num, ord2.date.year, ord2.date.month, ord2.date.day, ord2.amount);

    printf("%-10s %4d/%2d/%2d"    HK$%10d\n"),
        ord3.num, ord3.date.year, ord3.date.month, ord3.date.day, ord3.amount);
    
    printf("\n\n")
        
    system("pause");
    return 0;
}
