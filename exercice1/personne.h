class Personne {
private:
	unsigned short m_age;
	char m_nom[20];
	char m_prenom[20];
public:
	Personne();
	Personne(unsigned short age, char* m_nom, char* m_prenom);
	Personne(Personne& p);

	~Personne() = default;

	void affiche() const;

	unsigned short obtenirAge() const;
	char * obtenirPrenom();
	char * obtenirNom();
};
