#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct _dates
    {
        int years, month, day;
    } dates;

    typedef struct _order
    {
        char num[11];   // 訂單編號
        dates date;     // 訂貨日期
        int amount;     // 訂貨金額
    } order;

    order ord1 = { "AHB0A1024",{1994, 3, 8}, 1487 };
    order ord2 = { "US0A81025",{2015, 5, 20}, 54530 };
    order ord3 = { "UN0BA1028",{2020, 8, 7}, 663613 };

    printf("    ******************************\n");
    printf("    *        訂單資料            *\n");
    printf("    ******************************\n");

    printf("---------------------------------------------------\n");
    printf("   訂單編號         訂貨日期         訂貨金額\n");
    printf("---------------------------------------------------\n");

    printf("%-10s %4d/%02d/%02d   NT$%10d\n",
        ord1.num, ord1.date.years, ord1.date.month, ord1.date.day, ord1.amount);

    printf("%-10s %4d/%02d/%02d   US$%10d\n",
        ord2.num, ord2.date.years, ord2.date.month, ord2.date.day, ord2.amount);

    printf("%-10s %4d/%02d/%02d   HK$%10d\n",
        ord3.num, ord3.date.years, ord3.date.month, ord3.date.day, ord3.amount);

    printf("\n\n");

    system("pause");
    return 0;
}

