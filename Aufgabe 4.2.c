#include <stdio.h>
#include <string.h>

#define MAXN 10
#define MAXL 3

#define bool int
#define true 1
#define false 0

int i = 0;

typedef struct artikel {
    int bestellnummer;
    char artikelname[MAXN];
    int bestand;
} artikel;

void init(artikel al[MAXL]) {
    for (i = 0; i < MAXL; i++) {
        al[i].bestellnummer = 0;
        strcpy(al[i].artikelname, "n.n.");
        al[i].bestand = 0;
    }
}

void eingeben(artikel al[MAXL]) {
    bool slotFound = false;
    for (i = 0; i < MAXL; i++) {
        if (strcmp(al[i].artikelname, "n.n.") == 0) {
            slotFound = true;
            break;
        }
    }

    if(!(slotFound)) {
        printf("Keinen freien Platz gefunden! Bitte loesche einen Artikel oder initialisiere die Liste! \n\n");
        return;
    }

    printf("Bestellnummer: ");
    scanf("%i", &al[i].bestellnummer);

    char name[MAXN];
    printf("Artikelname: ");
    scanf("%s", &name);
    strcpy(al[i].artikelname, &name);

    printf("Bestand: ");
    scanf("%i", &al[i].bestand);
}

void suchen(artikel al[MAXL]) {
    printf("Bitte geben Sie die Bestellnummer ein: ");
    int bestellnummer;
    scanf("%d", &bestellnummer);

    for (i = 0; i < MAXL; i++) {
        if (al[i].bestellnummer == bestellnummer) {
            printf("Dieser Artikel existiert! \n\n");
            return;
        }
    }

    printf("Dieser Artikel existiert nicht! \n\n");
}

void loeschen(artikel al[MAXL]) {
    printf("Bitte geben Sie die Bestellnummer ein: ");
    int bestellnummer;
    scanf("%d", &bestellnummer);

    for (i = 0; i < MAXL; i++) {
        if (al[i].bestellnummer == bestellnummer) {
            al[i].bestellnummer = 0;
            strcpy(al[i].artikelname, "n.n.");
            al[i].bestand = 0;
            printf("Der Artikel wurde geloescht! \n\n");
            return;
        }
    }
    printf("Keinen Artikel mit dieser Bestellnummer gefunden! \n\n");
}

void bestPlus(artikel al[MAXL]) {
    printf("Bitte geben Sie die Bestellnummer ein: ");
    int bestellnummer;
    scanf("%d", &bestellnummer);

    for (i = 0; i < MAXL; i++) {
        if (al[i].bestellnummer == bestellnummer) {
            al[i].bestand += 1;
            printf("Der Bestand wurde um 1 erhoeht! \n\n");
            return;
        }
    }
    printf("Keinen Artikel mit dieser Bestellnummer gefunden! \n\n");
}

void bestMinus(artikel al[MAXL]) {
    printf("Bitte geben Sie die Bestellnummer ein: ");
    int bestellnummer;
    scanf("%d", &bestellnummer);

    for (i = 0; i < MAXL; i++) {
        if (al[i].bestellnummer == bestellnummer) {
            al[i].bestand -= 1;
            printf("Der Bestand wurde um 1 verringert! \n\n");
            return;
        }
    }
    printf("Keinen Artikel mit dieser Bestellnummer gefunden! \n\n");
}

void print(artikel al[MAXL]) {
    printf("Bestellnummer | Artikelname | Bestand\n");
    for (i = 0; i < MAXL; i++) {
        if (strcmp(al[i].artikelname, "n.n.") != 0) {
            printf("%d | %s | %d", al[i].bestellnummer, al[i].artikelname, al[i].bestand);
            printf("\n");
        }
    }
}

void bestellliste(artikel al[MAXL]) {
    printf("Bestellnummer | Artikelname | Bestand\n");
    for (i = 0; i < MAXL; i++) {
        if (al[i].bestand < 0) {
            printf("%d | %s | %d", al[i].bestellnummer, al[i].artikelname, al[i].bestand);
            printf("\n");
        }
    }
}

int main() {
    struct artikel al[MAXL];

    int eingabe = 0;

    init(&al[MAXL]);

    while (eingabe != 9) {
        printf("Bitte waehlen Sie:\n");
    	printf("1\tArtikel eingeben\n");
    	printf("2\tArtikel suchen\n");
    	printf("3\tArtikel loeschen\n");
    	printf("4\tBestand von Artikel um 1 erhoehen\n");
    	printf("5\tBestand von Artikel um 1 verringern\n");
    	printf("6\tArtikelliste drucken\n");
    	printf("7\tBestelliste drucken\n");
    	printf("8\tArtikelliste initialisiern\n");
    	printf("9\tProgramm beenden\n");
        scanf("%d", &eingabe);

        switch (eingabe) {
            case 1:
                eingeben(&al[MAXL]);
                break;
            case 2:
                suchen(&al[MAXL]);
                break;
            case 3:
                loeschen(&al[MAXL]);
                break;
            case 4:
                bestPlus(&al[MAXL]);
                break;
            case 5:
                bestMinus(&al[MAXL]);
                break;
            case 6:
                print(&al[MAXL]);
                break;
            case 7:
                bestellliste(&al[MAXL]);
                break;
            case 8:
                init(&al[MAXL]);
                break;
            default:
                return 0;
        }
    };
    return 0;
}


