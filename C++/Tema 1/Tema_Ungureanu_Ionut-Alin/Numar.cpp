#include "Numar.h"
void Numar::set_nr(int x)
{
	nr = x;
}
int Numar::get_nr()
{
	return nr;
}
int Numar::baza2(int x)
{
	int numere = 0;
	while (x)
	{
		x /= 2;
		numere++;
	}
	return numere;
}
int Numar::oglindit(int x)
{
	int aux = 0;
	while (x)
	{
		aux = aux * 10 + x % 10;
		x /= 10;
	}
	return aux;
}
bool Numar::prim(int x)
{
	if (x < 2)
		return 0;
	if (x > 2 && x % 2 == 0)
		return 0;
	for (int d = 3; d * d <= x; d += 2)
		if (x % d == 0)
			return 0;
	return 1;
}