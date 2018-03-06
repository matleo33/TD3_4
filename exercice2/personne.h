class Personne {
private:
	unsigned short m_age;
	char *m_nom = new char;
	char *m_prenom = new char;
public:
	Personne();
	Personne(unsigned short age, char* m_nom, char* m_prenom);
	Personne(Personne& p);

	~Personne();

	void affiche() const;

	unsigned short obtenirAge() const;
	char * obtenirPrenom();
	char * obtenirNom();
};
