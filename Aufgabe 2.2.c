#include <stdio.h>


int calc_y(float,float,float);

int main (void)
{
	int a,b,c;
	printf("\na) Hoehe der Darlehenssumme in Eurocent:\n");
	scanf("%d",&a);
	printf("\nb) Jaehrlicher Zinssatz in Prozent:\n");
	scanf("%d",&b);
	printf("\nc) Hoehe der jaehrlichen anfaenglichen Tilgung in Prozent von a):\n");
	scanf("%d",&c);

	float e=a*0.01;
	float f=b*0.01;
	float g=c*0.01;
	float x=(e*(1-g)*f)/12+e*g;
	int y=calc_y(e,f,g);
	float z=((e*(1-g)*f)/12)*(y-1)+((e*(1-g)-x*(y-1))*f)/12;
	printf("\n\n\nmonatliche Annuitaet = %.2f\n\nLaufzeit in Monaten = %d\n\ntotale Zinssumme = %.2f",x,y,z);
	return 0;
}

int calc_y(float a,float b,float c)
{
	a=a*(1-c);
	float x=(a*b)/12+a*c;
	int y=0;
	while(a>0)
	{
	a-=x;
	y++;
	}
	return y;
}
