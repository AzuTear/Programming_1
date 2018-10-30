#include <stdio.h>

int main()
{
    //Const. wird deklariert
    const float CZK = 25.89;

    printf("EUR\tCZK\n");
    printf("1\t%.2f\n", CZK*1);
    printf("2\t%.2f\n", CZK*2);
    printf("5\t%.2f\n", CZK*5);
    printf("10\t%.2f\n", CZK*10);
    printf("20\t%.2f\n", CZK*20);
    printf("50\t%.2f\n", CZK*50);
    printf("100\t%.2f\n\n", CZK*100);

    //Const. wird deklariert, variable wurde geändert
    const float EUR = 1/CZK;

    printf("CZK\tEUR\n");
    printf("1\t%.2f\n", EUR*1);
    printf("2\t%.2f\n", EUR*2);
    printf("5\t%.2f\n", EUR*5);
    printf("10\t%.2f\n", EUR*10);
    printf("20\t%.2f\n", EUR*20);
    printf("50\t%.2f\n", EUR*50);
    printf("100\t%.2f\n", EUR*100);

    return 0;
}
