class pile_entier{
private:
  int *entier;
public:
  pile_entier(int n);
  pile_entier();
  pile_entier(pile_entier &pile const);
  ~pile_entier();

  void empile();
  int depile();
  int pleine();
  int vide();
}
