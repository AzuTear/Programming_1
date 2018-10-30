#include <stdio.h>
int main(void)
{
    int i = 1; // i = Zahl
    float e = 0;// e = Summe aller eingegebenen Zahlen
    int n = -1; // n = Anzahl aller eingegebenen Zahlen

    printf("Bitte gib deine Zahlen ein: \n");


    //while-Schleife
    while (i != 0)
    {
        scanf("%d", &i);
        e += i;
        n++; // n wird nach einer eingebenen Zahl immer um 1 erhöht
    }

    //wenn Zahl 0 ist dann..
    if (i == 0)
    {
        printf("Deine Summe ist: %f\n", e);
        printf("Dein Mittelwert beträgt: %f", e/n);
    }
    return 0;
}
