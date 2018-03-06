
#include <iostream>
#include <string.h>

#include "personne.h"

using namespace std;

int main () {
	Personne personnes[5];
	personnes[0] = Personne();
	char *nom = new char;
	char *prenom = new char;
	Personne personne;
	personnes[1] = Personne(25, nom, prenom);
	char *nom2 = "Borlo";
	char *prenom2 = "Jean-Louis";
	personnes[2] = Personne(42, nom2, prenom2);
 	for(int i=0; i < 5; ++i)
	{
		personnes[i].affiche();
	}
  return 0;
}
