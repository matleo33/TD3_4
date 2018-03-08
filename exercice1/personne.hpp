#define taille 20

class Personne{
private :
  //char nom[taille];
  //char prenom[taille];
  char *prenom;
  char *nom;
  int age;
public:
  Personne();
  Personne(char *_nom,char *_prenom, int _age);
  Personne(const Personne& personne);
  ~Personne();

  void affiche() const;
};
