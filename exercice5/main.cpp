//Question 1

//Le const signifie que l'argument est en lecture seule, est ne peut donc pas être modifié.
//Si l'on tente de modifier cette valeur, on a une erreur car on tente d'assigner une valeur a une variable en lecture seule.
/*
#include <iostream>
using namespace std;

void affiche(const int& n) {
  cout << "Valeur de n " << n  << endl;
}

int main() {
  int a = 5;
  affiche(a);
}*/


//Question 2

//Si l'on tente de mofidier l'objet à l'intérieur de la fonction "void affiche() const" on a une erreur car on tente de modifier un objet en lecture seule.
#include "personne.h"

int main(){

  Personne p[20];
  char nom[20] = "berwit";
  char prenom[20] = "yonnel";
  Personne pers1(prenom,nom, 20);
  p[0] = pers1;

  for(int i=0;i<1;i++)
  {
    p[i].affiche();
  }
  return 0;
}
