#include <stdio.h>

int fak (int x){

return x>1?x*fak(x-1): 1;
}

int main (void){

	int n;
	int k;

	printf("Berechnung des Binomialkoeffizienten.\n");
	printf("Geben sie ihr n ein:\n");
	scanf("%d", &n);
	printf("Geben sie ihr k ein:\n");
	scanf("%d", &k);

	int nk = n-k;

		if (k==0||k==n)
		{
			printf("Das Ergebnis ist 1.");
			return 1;
		}
		else
		{
			int erg;
			erg = fak(n)/(fak(k)*fak(nk));
			printf("Das Ergebnis ist: %d\n", erg);
			return erg;
		}
}
