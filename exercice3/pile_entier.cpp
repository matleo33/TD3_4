#include <iostream>
#include "pile_entier.hpp"

using namespace std;

pile_entier::pile_entier(int n)
	: entier(new int(n)), sommetPile(-1), Taille_Max(n)
{
}

pile_entier::pile_entier()
	: entier(new int(20)), sommetPile(-1), Taille_Max(20)
{
}

pile_entier::pile_entier(const pile_entier &pile)
	: entier(pile.entier), sommetPile(-1), Taille_Max(pile.Taille_Max)
{
}

pile_entier::~pile_entier(){
	if (entier != NULL)
	{
		delete entier;
	}
}

void pile_entier::empile(int p)
{
	if(pleine() == 0)
	{
		sommetPile++;
		entier[sommetPile] = p;
	}
}

int pile_entier::depile()
{
	int tmp;
	if(vide() == 0)
	{
		tmp = entier[sommetPile];
		sommetPile--;
		return tmp;
	}
	return -1;
}

int pile_entier::pleine()
{
	if (sommetPile == (Taille_Max - 1))
		return 1;
	return 0;
}

int pile_entier::vide()
{
	if (sommetPile == -1)
		return 1;
	return 0;
}
