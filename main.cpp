#include <iostream>
#include <string.h>

#include "personne.h"

using namespace std;

int main () {
  char nom[] = "Bresil";
  char prenom[] = "Michel";
  Personne personne (25, nom, prenom);
  personne.affiche();
  return 0;
}
