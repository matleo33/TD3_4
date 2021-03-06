#include "personne.h"
#include <iostream>
#include <string.h>


Personne::Personne()
	:m_prenom(""), m_nom(""), m_age(0)
{
}

Personne::Personne(unsigned short age, char * nom, char * prenom)
	: m_age(age)
{
	strcpy(m_nom, nom);
	strcpy(m_prenom, prenom);
}

Personne::Personne(Personne& p)
{
	m_age = p.obtenirAge();
	strcpy(m_nom, p.obtenirNom());
	strcpy(m_prenom, p.obtenirPrenom());
}

void Personne::affiche() const {
	std::cout << "Bonjour, je m'appelle " << m_prenom << " " << m_nom << std::endl;
	std::cout << "J'ai" << m_age << " ans." << std::endl;
}


unsigned short Personne::obtenirAge() const
{
	return m_age;
}

char * Personne::obtenirPrenom()
{
	return m_prenom;
}

char * Personne::obtenirNom()
{
	return m_nom;
}
