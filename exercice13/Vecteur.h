#define TAILLE 3

class Vecteur
{
private:
	double vect[TAILLE];
public:
	Vecteur(double t[TAILLE]){
	for(int i=0;i<TAILLE;i++)
		vect[i]=t[i];
	}
};
