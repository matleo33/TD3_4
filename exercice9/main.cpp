#include "vecteur3D.h"

int main()
{
	Vecteur3D vecteur(5,6,7);
	vecteur.affiche();
	char* string = "C'est mon vecteur";
	vecteur.affiche(string);
	Vecteur3D vecteur2;
	vecteur2.affiche();
	std::cout << vecteur.coincide(vecteur2) << std::endl;
	std::cout << "Produit scalaire : " << vecteur.produit_scalaire(vecteur2) << std::endl;
	Vecteur3D vecteur3(45,4,68);
	Vecteur3D laSomme = vecteur.somme(vecteur3);
	laSomme.affiche();
	return 0;
}
