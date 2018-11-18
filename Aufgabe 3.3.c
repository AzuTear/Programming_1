#include <stdio.h>

//Deklarierung der Formel
int K(int x)
{
	return x/100;
}

int M(int x)
{
	return 15+((3*K(x)+3))/4-((8*K(x)+13)/25);
}

int S(int x)
{
	return 2-((3*K(x)+3)/4);
}

int A(int x)
{
	return x%19;
}

int D(int x)
{
	return (19*A(x)+M(x))%30;
}

int R(int x)
{
	return (D(x)+A(x)/11)/29;
}

int OG(int x)
{
	return 21+D(x)-R(x);
}

int SZ(int x)
{
	return 7-(x+x/4+S(x))%7;
}

int OE(int x)
{
	return 7-(OG(x)-SZ(x))%7;
}

int OS(int x)
{
	return OG(x)+OE(x);
}
int main()
{
	int x;
	printf("Geben Sie ein Jahr an:\n");
	scanf("%d", &x);

	if(OS(x)<=31){
		printf("Das Osterfest findet am %d Maerz statt!", OS(x));
	}
	else
	{
		printf("Das Osterfest findet am %d April statt!", OS(x)-31);
	}
	return 0;
}
