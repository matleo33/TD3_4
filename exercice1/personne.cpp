#include "personne.hpp"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

Personne::Personne()
{
  nom = NULL;
  prenom = NULL;
}

Personne::Personne(char *_nom,char *_prenom, int _age)
{
  int lnom = strlen(_nom);
  int lprenom = strlen(_prenom);
  nom = new char[lnom];
  prenom = new char[lprenom];
  strcpy(nom,_nom);
  strcpy(prenom,_prenom);
  /*if(lnom>= taille)
    {
      nom[taille-1]='\0';
    }
  if(lprenom>= taille)
    {
      prenom[taille-1]='\0';
      }*/
  age=_age;
}

Personne::Personne(const Personne& personne)
{
  strcpy(nom,personne.nom);
  strcpy(prenom,personne.prenom);
  age = personne.age;
}

Personne::~Personne(){
  if(nom != NULL)
  {
    delete[] nom;
  }
  if(prenom != NULL)
  {
    delete[] prenom;
  }
}

void Personne::affiche() const
{
  std::cout << nom << " " << prenom << " " << age << std::endl;
}
