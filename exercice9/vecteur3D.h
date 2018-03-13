#include <iostream>

class Vecteur3D
{
private:
	double m_x;
	double m_y;
	double m_z;
public:
	Vecteur3D();
	Vecteur3D(double x, double y, double z);
	
	void affiche();
	void affiche(const char* string);

	int abscisse() const;
	int ordonnee() const;
	int cote() const;

	void fixer_abscisse(int nouvelle_abs);
	void fixer_ordonnee(int nouvelle_ord);
	void fixer_cote(int nouveau_cote);
	
	bool coincide(Vecteur3D v);
	double produit_scalaire(Vecteur3D v);

	Vecteur3D somme(Vecteur3D v);
};

inline Vecteur3D::Vecteur3D()
        :m_x(0), m_y(0), m_z(0)
{}

inline Vecteur3D::Vecteur3D(double x, double y, double z)
        :m_x(x), m_y(y), m_z(z)
{}
