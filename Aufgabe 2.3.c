#include <stdio.h>
#include <time.h>

int istSchaltjahr1(int);
int istSchaltjahr2(int);

//Funktionen werden definiert
int istSchaltjahr1(int n) {
    if(n % 4 == 0 && !(n % 100 == 0 && n % 400 != 0)) {
        return 1;
    } else {
        return 0;
    }
}

int istSchaltjahr2(int n) {
    if((n % 400 == 0 || n % 100 != 0) && n % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}


//Ab hier beginnt das Programm
int main() {
	// time_t wird deklariert
    time_t startzeit, endzeit;

    //Ab hier beginnt die 1te Variante
    int schaltjahre = 0, jahre = 1000000000;

    printf("Variante 1 in Bearbeitung...\n");
    time(&startzeit);
    for (int i = 1; i <= jahre; i++) {
        if(istSchaltjahr1(i)) {
            schaltjahre++;
        }
    }
    time(&endzeit);



    printf("Für diese Berechnung wurden: %f Sekunden benötigt.\n", difftime(endzeit, startzeit));
    printf("Anzahl der Schaltjahre: %i \n\n", schaltjahre);

    schaltjahre = 0; //Schaltjahr wird wieder auf 0 restet!

    //Ab hier beginnt die 2te Variante
    printf("Variante 2. in Bearbeitung... \n");
    time(&startzeit);
    for (int i = 1; i <= jahre; i++) {
        if(istSchaltjahr2(i)) {
            schaltjahre++;
        }
    }
    time(&endzeit);


    printf("Für diese Berechnung wurden: %f Sekunden benötigt. \n", difftime(endzeit, startzeit));
    printf("Anzahl der Schaltjahre: %i \n", schaltjahre);

    return 0;
}

