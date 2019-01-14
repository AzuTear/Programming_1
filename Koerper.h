#ifndef KOERPER_H_
#define KOERPER_H_

enum Color{Rot=1, Gruen, Gelb, Blau};

//Rechteck
class Rechteck {
	private:
		float laenge;
		float breite;
		Color farbe;
	public:
		//Konstruktor
		Rechteck(){
			laenge = 0;
			breite = 0;
		}
		Rechteck(float l, float b, Color r){
			laenge = l;
			breite = b;
			farbe = r;
		}

		float flaeche();
		float umfang();
		void print();
		void set_laenge(float l);
		float get_laenge();
		void set_breite(float b);
		float get_breite();
		void set_color(Color r);
		Color get_color();
};

class Kreis {
	private:
		float radius;
		Color farbe;
	public:
		//Konstruktor
		Kreis(){
			radius = 0;
		}
		Kreis(float r, Color k){
			radius = r;
			farbe = k;
		}

		float flaeche();
		float umfang();
		void print();
		void set_radius(float r);
		float get_radius();
		void set_color(Color k);
		Color get_color();
};

class Dreieck {
public:
	float seite1;
	float seite2;
	float seite3;
	Color farbe;
	//Konstruktor
	Dreieck(){
		seite1 = 0;
		seite2 = 0;
		seite3 = 0;
	}
	Dreieck(float s1, float s2, float s3, Color d){
		seite1 = s1;
		seite2 = s2;
		seite3 = s3;
		farbe = d;
	}

	float flaeche();
	float umfang();
	void print();

	void set_seite1(float s1);
	float get_seite1();
	void set_seite2(float s2);
	float get_seite2();
	void set_seite3(float s3);
	float get_seite3();
	void set_color(Color d);
	Color get_color();

};

class DreieckGleich:public Dreieck{
public:
	//Konstruktor
	DreieckGleich(){
		seite1;
	}
	float flaeche();
	float umfang();
	void print();

};

#endif
