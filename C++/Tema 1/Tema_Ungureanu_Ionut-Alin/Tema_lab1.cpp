/*Sa se dezvolte o aplicatie care sa contina 3 clase:
Prima clasa Dreptunghi cu atribute despre lungimile laturilor si metode despre citirea,afisarea,calculul ariei
si perimetrului; se vor introduce datele despre 2 dreptunghiuri (unul va fi alocat dinamic) si se vor afisa
datele despre dreptunghiul cu suprafata minima si dreptunghiul cu perimetrul maxim.

A doua clasa Student cu atribute private nume,prenume si cnp si publice anul de studii si notele de la cele
3 materii. Ca si metode sunt calculul mediei finale,initializarea mediilor,numelor studentilor si a cnp-ului;
se vor introduce si se vor afisa datele despre 2 studenti (unul va fi alocat dinamic) si se va verifica
daca fiecare este student sau studenta si se va afisa studentul cu media mai mare.

A treia clasa Numar cu atribut privat numarul insusi si metode citirea numarului,numarul de cifre
ale numarului reprezentat în baza 2 ,calculul oglinditului si verificarea primalitatii. Se vor introduce 4 
numere ,se verifica la fiecare numar daca este palindrom, daca este prim si se determina numarul de cifre
ale numarului reprezentat în baza 2.
*/

#include<iostream>
#include "Numar.h"
using namespace std;

class Dreptunghi {
public:
	//atribute
	double lungime, latime;

	//metode
	void citire()
	{
		cout << "Datele dreptunghiului:" << endl;
		cout << "Lungimea:";
		cin >> lungime;
		cout << "Latimea:";
		cin >> latime;
		cout << endl;
	}
	void afisare()
	{
		cout << "Lungimea="<< lungime <<endl;
		cout << "Latimea=" << latime << endl;
		cout << "Perimetrul=" << perimetru()<<endl;
		cout << "Aria=" << aria()<<endl;
	}
	double aria()
	{
		return lungime * latime;
	}
	double perimetru()
	{
		return 2 * (lungime + latime);
	}
};


class Student {
private:
	long long int cnp;
	string nume, prenume;
public:
	int AnStudii;
	double notamat1, notamat2, notamat3;
	double medie();
	void set_cnp(long long int cod);
	long long int get_cnp();
	void set_nume(string s);
	string get_nume();
	void set_prenume(string s);
	string get_prenume();
	bool stud_f_sau_m(long long int cnp);
	void init(double a, double b, double c);
};

double Student::medie()
{
	return (notamat1+notamat2+notamat3)/3.;
}

void Student::set_cnp(long long int cod)
{
	cnp = cod;
}

long long int Student::get_cnp()
{
	return cnp;
}

void Student::set_nume(string s)
{
	nume = s;
}

string Student::get_nume()
{
	return nume;
}

void Student::set_prenume(string s)
{
	prenume = s;
}

string Student::get_prenume()
{
	return prenume;
}

void Student::init(double a, double b, double c)
{
	notamat1 = a;
	notamat2 = b;
	notamat3 = c;
}

bool Student::stud_f_sau_m(long long int cnp)
{
	long long int copie = cnp;
	bool i=0;
	while (copie > 9)
		copie /= 10;
	switch (copie)
	{
	case 1:i=1; break;
	case 2:i=0; break;
	case 5:i=1; break;
	case 6:i=0; break;
	}
	return i;
}

int main()
{
	Dreptunghi a, *b;
	b = new Dreptunghi();
	cout << "Primul dreptunghi" << endl;
	a.citire();
	cout << "Al doilea dreptunghi" << endl;
	(*b).citire();
	cout << "Dreptunghiul cu suprafata minima este:" << endl;
	if (a.aria() < b->aria())
		a.afisare();
	else
		b->afisare();
	cout << endl;
	cout << "Dreptunghiul cu perimetrul maxim este:" << endl;
	if (a.perimetru() > (*b).perimetru())
		a.afisare();
	else
		(*b).afisare();
	delete b;
	cout << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;


	Student x, *y;
	y = new Student();
	x.set_prenume("Alin");
	x.set_nume("Ungureanu");
	x.set_cnp(5000914270017);
	x.init(9.25, 8.75, 9.5); 
	x.AnStudii = 1;
	(*y).set_prenume("Andreea");
	(*y).set_nume("Suciu");
	(*y).set_cnp(2990121271211);
	(*y).init(10, 9.75, 8.15);
	(*y).AnStudii = 2;
	cout << "Datele primului student:" << endl;
	cout << "Nume:" << x.get_nume() << endl;
	cout << "Prenume:" << x.get_prenume() << endl;
	cout << "CNP:" << x.get_cnp() << endl;
	cout << "Anul de studii:" << x.AnStudii<<endl;
	cout << "Media la prima materie:" << x.notamat1 << endl;
	cout << "Media la a doua materie:" << x.notamat2 << endl;
	cout << "Media la a treia materie:" << x.notamat3 << endl;
	cout << "Media finala este:" << x.medie() << endl;
	if (x.stud_f_sau_m(x.get_cnp()))
		cout << "Este student" << endl;
	else
		cout << "Este studenta" << endl;

	cout << endl;
	cout << "Datele celui de-al doilea student:" << endl;
	cout << "Nume:" << y->get_nume() << endl;
	cout << "Prenume:" << y->get_prenume() << endl;
	cout << "CNP:" << y->get_cnp() << endl;
	cout << "Anul de studii:" << y->AnStudii << endl;
	cout << "Media la prima materie:" << y->notamat1 << endl;
	cout << "Media la a doua materie:" << y->notamat2 << endl;
	cout << "Media la a treia materie:" <<y->notamat3 << endl;
	cout << "Media finala este:" << y->medie() << endl;
	if (y->stud_f_sau_m(y->get_cnp()))
	{
		cout << "Este student" << endl;
		cout << endl;
		if (x.medie() > (*y).medie())
			cout << "Studentul " << x.get_nume() << " " << x.get_prenume() << " are media mai mare." << endl;
		else
			cout << "Studentul " << y->get_nume() << " " << y->get_prenume() << " are media mai mare." << endl;
	}
	else
	{
		cout << "Este studenta" << endl;
		cout << endl;
		if (x.medie() > (*y).medie())
			cout << "Studenta " << x.get_nume() << " " << x.get_prenume() << " are media mai mare." << endl;
		else
			cout << "Studenta " << y->get_nume() << " " << y->get_prenume() << " are media mai mare." << endl;
	}
	delete y;
	cout << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;


	Numar m, n, *o, *p;
	o = new Numar();
	p = new Numar();
	cout << "Primul numar:";
	m.set_nr(343);
	cout << m.get_nr() << endl;
	cout << "Numarul reprezentat in baza 2 are "<<m.baza2(m.get_nr())<<" cifre."<<endl;
	if (m.get_nr() == m.oglindit(m.get_nr()))
		cout << "Numarul " << m.get_nr() << " este palindrom." << endl;
	else
		cout << "Numarul " << m.get_nr() << " nu este palindrom." << endl;
	if(m.prim(m.get_nr()))
		cout << "Numarul " << m.get_nr() << " este prim." << endl;
	else
		cout << "Numarul " << m.get_nr() << " nu este prim." << endl;
	cout << endl;
	cout << "Al doilea numar:";
	n.set_nr(17);
	cout << n.get_nr() << endl;
	cout << "Numarul reprezentat in baza 2 are " << n.baza2(n.get_nr()) << " cifre." << endl;
	if (n.get_nr() == n.oglindit(n.get_nr()))
		cout << "Numarul " << n.get_nr() << " este palindrom." << endl;
	else
		cout << "Numarul " << n.get_nr() << " nu este palindrom." << endl;
	if (n.prim(n.get_nr()))
		cout << "Numarul " << n.get_nr() << " este prim." << endl;
	else
		cout << "Numarul " << n.get_nr() << " nu este prim." << endl;
	cout << endl;
	cout << "Al treilea numar:";
	(*o).set_nr(11);
	cout << (*o).get_nr() << endl;
	cout << "Numarul reprezentat in baza 2 are " << (*o).baza2((*o).get_nr()) << " cifre." << endl;
	if ((*o).get_nr() == (*o).oglindit((*o).get_nr()))
		cout << "Numarul " << (*o).get_nr() << " este palindrom." << endl;
	else
		cout << "Numarul " << (*o).get_nr() << " nu este palindrom." << endl;
	if ((*o).prim((*o).get_nr()))
		cout << "Numarul " << (*o).get_nr() << " este prim." << endl;
	else
		cout << "Numarul " << (*o).get_nr() << " nu este prim." << endl;
	delete o;
	cout << endl;
	cout << "Al patrulea numar:";
	p->set_nr(296);
	cout << p->get_nr() << endl;
	cout << "Numarul reprezentat in baza 2 are " << p->baza2(p->get_nr()) << " cifre." << endl;
	if (p->get_nr() == p->oglindit(p->get_nr()))
		cout << "Numarul " << p->get_nr() << " este palindrom." << endl;
	else
		cout << "Numarul " << p->get_nr() << " nu este palindrom." << endl;
	if (p->prim(p->get_nr()))
		cout << "Numarul " << p->get_nr() << " este prim." << endl;
	else
		cout << "Numarul " << p->get_nr() << " nu este prim." << endl;
	delete p;
	cout << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;
	return 0;
}