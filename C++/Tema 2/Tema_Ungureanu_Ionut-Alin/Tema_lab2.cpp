/*Acest program reprezinta un mic 'joculet' ce simuleaza o lupta dintre un zeu si un demon. Sunt doi playeri care se logheaza pe 'platforma'
folosind username si parola, ca sa intre in joc. Unul va juca cu zeul si celalalt cu demonul. Isi aleg fiecare 'care dintre caractere li se par mai
puternice' (introducand de la tastatura numele, damage, sanatate, abilitate speciala etc). Si incepe lupta astfel, se genereaza un numar de la 1 la 100.
Daca numarul este par, incepe lupta zeul, altfel demonul este cel care incepe. Fiecare alege o lovitura si daca 'ratezi' comanda, ti-ai pierdut randul
si tot asa pana ce primul dintre ei ajunge la sanatate = 0 sau < 0. Cine ramane cu sanatate >0 castiga lupta. Daca se doreste se poate incepe o alta
lupta si tot asa pana cand se doreste.
*/

#include <iostream>
#include <time.h>
#include <string>
#include "Messages.h"
#include "Player.h"
#include "Account.h"
#include "Gods.h"
#include "Demons.h"
#include "Special_Attack.h"
#include "Parents.h"
#define LIM 100;
using namespace std;

int main()
{
	int xx, yy, zz;
	string s, u, v;
	Player a, b;
	a.name = "Andrei";
	a.age = 18;
	a.level = 46;
	b.name = "Cosmin";
	b.age = 21;
	b.level = 38;
	cout << "Salut!" << endl;
	cout << "Urmeaza prezentarea celor doi playeri." << endl;
	cout << "Player 1" << endl;
	cout << "Nume:" << a.name << endl;
	cout << "Varsta:" << a.age << endl;
	cout << "Nivel:" << a.level << endl;
	cout << endl;
	cout << "Player 2" << endl;
	cout << "Nume:" << b.name << endl;
	cout << "Varsta:" << b.age << endl;
	cout << "Nivel:" << b.level << endl;
	cout << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << endl;
	cout << "Conectati-va cu acel cont pe care l-ati creat." << endl;
	cout << "Player 1" << endl;
	cout << "Username:";
	cin >> s;
	a.account.set_username(s);
	cout << "Parola:";
	cin >> s;
	a.account.set_password(s);
	a.account.set_code(630);
	cout << endl;
	cout << "Player 2:" << endl;
	cout << "Username:";
	cin >> s;
	cout << "Parola:";
	cin >> u;
	Account c(s, u, 5471);
	b.account.set_username(c.get_username());
	b.account.set_password(c.get_password());
	b.account.set_code(c.get_code());
	cout << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << endl;
	a.urare();
	cout << endl;
	b.prezentare();
	cout << endl;
	cout << endl;
	char ddd[50];
	ddd[0] = 'D';
	ddd[1] = 'a';
	ddd[2] = '\0';
	while ((ddd[0] == 'D' && ddd[1] == 'a') && ddd[2] == '\0')
	{
		cout << "Alegeti-va caracterele." << endl;
		cout << endl;
		Special_Attack g;
		cout << "Player 1 isi alege:" << endl;
		cout << "Zeul:";
		cin >> s;
		cout << "Sanatate:";
		cin >> xx;
		cout << "Damage:";
		cin >> yy;
		cout << "Nume abilitate speciala:";
		cin >> u;
		cout << "Tip abilitate:";
		cin >> v;
		cout << "Damage abilitate:";
		cin >> zz;
		cout << endl;
		Special_Attack gg(u, v, zz);
		g.set_name(gg.get_name());
		g.set_type(gg.get_type());
		g.set_damage(gg.get_damage());
		g.nume = s;
		g.health = xx;
		g.dimage = yy;
		Demons o;
		cout << "Player 2 isi alege:" << endl;
		cout << "Demon:";
		cin >> s;
		o.name = s;
		cout << "Sanatate:";
		cin >> xx;
		o.health = xx;
		cout << "Damage:";
		cin >> yy;
		o.damage = yy;
		cout << "Mama:";
		cin >> s;
		cout << "Tata:";
		cin >> u;
		cout << "Numar frati:";
		cin >> xx;
		cout << "Numar surori:";
		cin >> yy;
		Parents p(s, u, xx, yy);
		cout << endl;
		g.urare();
		cout << endl;
		g.prezentare();
		cout << endl;
		cout << endl;
		o.urare();
		cout << endl;
		o.prezentare();
		cout << endl;
		cout << endl;
		cout << "Se genereaza un numar de la 1 la 100" << endl;
		cin.get();
		int nr;
		srand(time(NULL));
		nr = rand() % LIM + 1;
		cout << "Se afiseaza numarul " << nr << "." << endl;
		cout << endl;
		if (nr % 2 == 0)
		{
			cout << "Este numar par, incepe zeul." << endl;
			cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
			cout << endl;
			int i = 0;
			while (g.health > 0 && o.health > 0)
			{
				if (i % 2 == 0)
				{
					cout << "--Alege tipul de damage:D-damage/S-special attack:  ";
					char ppp[50];
					cin.getline(ppp, 50);
					cout << endl;
					if (ppp[0] == 'D' && ppp[1] == '\0')
					{
						cout << "Ai ales damage, ai scazut din sanatatea adversarului " << g.dimage << endl;
						o.health -= g.dimage;
						cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
					}
					else
					{
						if (ppp[0] == 'S' && ppp[1] == '\0')
						{
							cout << "Ai ales special attack, ai scazut din sanatatea adversarului " << g.get_damage() << endl;
							o.health -= g.get_damage();
							cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
						}
						else
						{
							cout << "Ai ratat comanda, fii mai atent!" << endl;
							cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
						}
					}
					cout << endl;
				}
				else
				{
					cout << "--Alege tipul de damage:D-damage  ";
					char ppp[50];
					cin.getline(ppp, 50);
					cout << endl;
					if (ppp[0] == 'D' && ppp[1] == '\0')
					{
						cout << "Ai ales damage, ai scazut din sanatatea adversarului " << o.damage << endl;
						g.health -= o.damage;
						cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
					}
					else
					{
						cout << "Ai ratat comanda, fii mai atent!" << endl;
						cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
					}
					cout << endl;
				}
				i++;
			}
			cout << endl;
			if (g.health > 0)
			{
				cout << "Felicitari pentru zeul " << g.nume << endl;
				cout << "A castigat Player 1" << endl;
			}
			if (o.health > 0)
			{
				cout << "Felicitari pentru demonul " << o.name << endl;
				cout << "A castigat Player 2" << endl;
			}
			cout << endl;
		}
		else
		{
			cout << "Este numar impar, incepe demonul." << endl;
			cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
			cout << endl;
			int i = 0;
			while (g.health > 0 && o.health > 0)
			{
				if (i % 2 == 0)
				{
					cout << "--Alege tipul de damage:D-damage  ";
					char ppp[50];
					cin.getline(ppp, 50);
					cout << endl;
					if (ppp[0] == 'D' && ppp[1] == '\0')
					{
						cout << "Ai ales damage, ai scazut din sanatatea adversarului " << o.damage << endl;
						g.health -= o.damage;
						cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
					}
					else
					{
						cout << "Ai ratat comanda, fii mai atent!" << endl;
						cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
					}
					cout << endl;
				}
				else
				{
					cout << "--Alege tipul de damage:D-damage/S-special attack:  ";
					char ppp[50];
					cin.getline(ppp, 50);
					cout << endl;
					if (ppp[0] == 'D' && ppp[1] == '\0')
					{
						cout << "Ai ales damage, ai scazut din sanatatea adversarului " << g.dimage << endl;
						o.health -= g.dimage;
						cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
					}
					else
					{
						if (ppp[0] == 'S' && ppp[1] == '\0')
						{
							cout << "Ai ales special attack, ai scazut din sanatatea adversarului " << g.get_damage() << endl;
							o.health -= g.get_damage();
							cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
						}
						else
						{
							cout << "Ai ratat comanda, fii mai atent!" << endl;
							cout << "Zeul:" << g.health << "            Demonul:" << o.health << endl;
						}
					}
					cout << endl;
				}
				i++;
			}
			cout << endl;
			if (g.health > 0)
			{
				cout << "Felicitari pentru zeul " << g.nume << endl;
				cout << "A castigat Player 1" << endl;
			}
			if (o.health > 0)
			{
				cout << "Felicitari pentru demonul " << o.name << endl;
				cout << "A castigat Player 2" << endl;
			}
			cout << endl;
		}
		cout << endl;
		char lll[50];
		lll[0] = 'D';
		while (lll[0] == 'D')
		{
			cout << "Doriti sa continuati? (Da/Nu):  ";
			char aaa[50];
			cin.getline(aaa, 50);
			if ((aaa[0] == 'D' && aaa[1] == 'a') && aaa[2] == '\0')
			{
				strcpy_s(ddd, sizeof(ddd), aaa);
				lll[0] = '\0';
			}
			else
			{
				if ((aaa[0] == 'N' && aaa[1] == 'u') && aaa[2] == '\0')
				{
					strcpy_s(ddd, sizeof(ddd), aaa);
					lll[0] = '\0';
				}
				else
				{
					cout << "Ati gresit comanda, mai incercati o data." << endl;
				}
			}
			cout << endl;

		}
		cout << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
	}
	cout << "Va multumesc pentru vizionare, sper ca v-a placut 'simularea' joculetului."<<endl;
	return 0;
}