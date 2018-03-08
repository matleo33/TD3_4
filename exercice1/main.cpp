#include "personne.hpp"

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
