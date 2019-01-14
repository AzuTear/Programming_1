#include <iostream>
#include <stdio.h>
#include "Koerper.h"

using namespace std;


int main()
{
	cout << "Rot=1; Gruen=2; Gelb=3, Blau=4" << endl;
	cout << endl;

	Rechteck *r1;
	r1 = new Rechteck;
	r1->set_breite(2);
	r1->set_laenge(4);
	r1->set_color(Blau);
	cout << "Erzeugt ein Rechteck: " << endl;
	r1->print();
	cout << endl;

	Kreis *k1;
	k1 = new Kreis;
	k1->set_radius(2);
	k1->set_color(Gruen);
	cout << "Erzeugt ein Kreis: " << endl;
	k1->print();
	cout << endl;

	Dreieck *d1;
	d1 = new Dreieck;
	d1->set_seite1(2);
	d1->set_seite2(3);
	d1->set_seite3(4);
	d1->set_color(Rot);
	cout << "Erzeugt ein Dreieck: " << endl;
	d1->print();
	cout << endl;

	DreieckGleich *g1;
	g1 = new DreieckGleich;
	g1->set_seite1(3);
	g1->set_color(Gelb);
	cout << "Erzeugt ein Gleichseitiges Dreieck: " << endl;
	g1->print();

	return 0;
}
