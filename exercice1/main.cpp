#include <iostream>
#include <string.h>

#include "personne.h"

#define taille 5

using namespace std;

int main () {
	Personne personnes[taille];
	personnes[0] = Personne();
	char nom[] = "Bresil";
	char prenom[] = "Michel";
	Personne personne (25, nom, prenom);
	personnes[1] = personne;
	char nom2[] = "Borlo";
	char prenom2[] = "Jean-Louis";
	personnes[2] = Personne(42, nom2, prenom2);
 	for(int i=0; i < taille; ++i)
	{
		personnes[i].affiche();
	}
  return 0;
}
