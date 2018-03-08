class pile_entier{
private:
  int *entier;
  int sommetPile;
  int Taille_Max;
public:
  pile_entier(int n);
  pile_entier();
  pile_entier(const pile_entier &pile);
  ~pile_entier();

  void empile(int p);
  int depile();
  int pleine();
  int vide();
};
