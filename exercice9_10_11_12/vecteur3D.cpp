#include "vecteur3D.h"

/*Vecteur3D::Vecteur3D()
	:m_x(0), m_y(0), m_z(0)
{}

Vecteur3D::Vecteur3D(double x, double y, double z)
	:m_x(x), m_y(y), m_z(z)
{}*/


void Vecteur3D::affiche()
{
	std::cout << "Ce vecteur a pour coordonnées (" << m_x << ", " << m_y << ", " << m_z << ")" << std::endl;
}

void Vecteur3D::affiche(const char* string)
{
	std::cout << string << std::endl;
        std::cout <<  "Ce vecteur a pour coordonnées (" << m_x << ", " << m_y << ", " << m_z << ")" << std::endl;
}

int Vecteur3D::abscisse() const
{
	return m_x;
}

int Vecteur3D::ordonnee() const
{
	return m_y;
}

int Vecteur3D::cote() const
{
	return m_z;
}

void Vecteur3D::fixer_abscisse(int nouvelle_abs)
{
	m_x = nouvelle_abs;
}

void Vecteur3D::fixer_ordonnee(int nouvelle_ord)
{
	m_y = nouvelle_ord;
}

void Vecteur3D::fixer_cote(int nouveau_cote)
{
	m_z = nouveau_cote;
}

bool Vecteur3D::coincide(Vecteur3D v)
{
	return (this->m_x == v.abscisse() && this->m_y == v.ordonnee() && this->m_z == v.cote());
}

int coincide(Vecteur3D v1, Vecteur3D v2)
{
	return (v1.abscisse() == v2.abscisse() && v1.ordonnee() == v2.ordonnee() && v1.cote() == v2.cote());
}

double Vecteur3D::produit_scalaire(Vecteur3D v)
{
	return (this->m_x * v.abscisse() + this->m_y * v.ordonnee() + this->m_z * v.cote()); 
}

Vecteur3D Vecteur3D::somme(Vecteur3D v)
{
	Vecteur3D tmp;
	tmp.fixer_abscisse(this->m_x+v.abscisse());
	tmp.fixer_ordonnee(this->m_y+v.ordonnee());
	tmp.fixer_cote(this->m_z+v.cote());
	return tmp;
}
