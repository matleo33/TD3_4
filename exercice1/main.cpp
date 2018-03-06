#include <iostream>
#include <string.h>

#include "personne.h"

using namespace std;

int main () {
	Personne personnes[5];
	personnes[0] = Personne();
	char nom[] = "Bresil";
	char prenom[] = "Michel";
	Personne personne (25, nom, prenom);
	personnes[1] = personne;
	char nom2[] = "Borlo";
	char prenom2[] = "Jean-Louis";
	personnes[2] = Personne(42, nom2, prenom2);
 	for(int i=0; i < 5; ++i)
	{
		personnes[i].affiche();
	}
  return 0;
}
