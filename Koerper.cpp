#include "Koerper.h"
#include <math.h>
#include <iostream>

using namespace std;

//Rechteck
	void Rechteck::set_laenge(float l){
		laenge = l;
	}
	float Rechteck::get_laenge(){
		return laenge;
	}
	void Rechteck::set_breite(float b){
		breite = b;
	}
	float Rechteck::get_breite(){
		return breite;
	}
	float Rechteck::flaeche(){
		return laenge*breite;
	}
	float Rechteck::umfang(){
		return 2*(laenge*breite);
}

	void Rechteck::print(){
		cout << "Laenge des Rechtecks: " << laenge << endl;
		cout << "Breite des Rechtecks: " << breite << endl;
		cout << "Flaeche des Rechtecks: " << flaeche() << endl;
		cout << "Umfang des Rechtecks: " << umfang() << endl;
		cout << "Die Farbe ist: " << farbe << endl;
	}

		void Rechteck::set_color(Color r){
			farbe = r;
		}
		Color Rechteck::get_color(){
			return farbe;
		}


//Kreis
	void Kreis::set_radius(float r){
		radius = r;
	}
	float Kreis::get_radius(){
		return radius;
	}
	float Kreis::flaeche(){
		return radius*radius*3.1415;
	}
	float Kreis::umfang(){
		return 2*radius*3.1415;
	}
	void Kreis::print(){
		cout << "Radius des Kreis: " << radius << endl;
		cout << "Flaeche des Kreis: " << flaeche() << endl;
		cout << "Umfang des Kreis: " << umfang() << endl;
		cout << "Die Farbe ist: " << farbe << endl;
	}
	void Kreis::set_color(Color k){
		farbe = k;
	}
	Color Kreis::get_color(){
		return farbe;
	}

//Dreieck
	void Dreieck::set_seite1(float s1){
		seite1 = s1;
	}
	float Dreieck::get_seite1(){
		return seite1;
	}
	void Dreieck::set_seite2(float s2){
		seite2 = s2;
	}
	float Dreieck::get_seite2(){
		return seite2;
	}
	void Dreieck::set_seite3(float s3){
		seite3 = s3;
	}
	float Dreieck::get_seite3(){
		return seite3;
	}
	float Dreieck::flaeche(){
		double s = umfang()/2;
		double a = s*(s-seite1)*(s-seite2)*(s-seite3);
		return sqrt(a);
	}
	float Dreieck::umfang(){
		return seite1+seite2+seite3;
	}
	void Dreieck::print(){
		cout << "Seite a des Dreiecks: " << seite1 << endl ;
		cout << "Seite b des Dreiecks: " << seite2 << endl ;
		cout << "Seite c des Dreiecks: " << seite3 << endl ;
		cout << "Flaeche des Dreiecks: " << flaeche() << endl;
		cout << "Umfang des Dreiecks: " << umfang() << endl;
		cout << "Die Farbe ist: " << farbe << endl;
	}
	void Dreieck::set_color(Color d){
		farbe = d;
	}
	Color Dreieck::get_color(){
		return farbe;
		}

//GleichDreieck
	float DreieckGleich::flaeche(){
		float s = (seite1+seite1+seite1)/2;
		return sqrt (s*(s-seite1)*(s-seite1)*(s-seite1));
	}
	float DreieckGleich::umfang(){
		return seite1*3;
	}
	void DreieckGleich::print(){
		cout << "Alle Seiten sind: " << seite1 << " lang." << endl;
		cout << "Flaeche des Dreiecks: " << flaeche() << endl;
		cout << "Umfang des Dreeicks: " << umfang() << endl;
		cout << "Die Farbe ist: " << farbe << endl;
	}

