#include <stdio.h>


int main (void){

    int n;
    int m=0;
    printf("Geben sie die Zahl ein von der sie die Fakultät berechnen lassen wollen:\n");
    scanf("%d", &n);

    m=n;

    while (n>2){
		n--;
		m=m*n ;
    }

    printf("Das Ergebnis ist %d", m);
    return m;
}
