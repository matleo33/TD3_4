#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int somme (int a, int b) {
  return a+b;
}

float somme(float a, float b) {
  return a+b;
}

int somme (int a[], int b[]) {
  int somme = 0;
  for (int i = 0 ; i <= 10 ; i++) {
    somme += a[i] + b[i];
  }
  return somme;
}

//On peut créer cette fonction sans problèmes car son prototype est différent
int somme(int a, int b, int c) {
  return a+b+c;
}

//Il est possible de définir une fonction ayant deux paramètres de types différents. Cependant, la valeur de retour sera le type de la fonction
float somme(int a, float b) {
  return a+b;
}

int main() {
  srand (time(NULL));
  
  int a = 5, b = 3;
  cout << somme(a,b) << endl;
  float c = 5.1, d = 4.3;
  cout << somme(c,d) << endl;
  int e[10], f[10];
  for (int i = 0 ; i <= 10 ; i++) {
    e[i] = rand() % 10;
    f[i] = rand() % 10;
  }
  cout << somme(e,f) << endl;

  //short int est un entier (polymorphisme), donc l'addition de deux short est possible
  short g = 3, h = 7;
  cout << somme(g,h) << endl;
  
  cout << somme(a,c) << endl;
  return 0;
}
