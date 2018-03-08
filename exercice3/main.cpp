#include "pile_entier.hpp"

#include <iostream>

int main()
{
	pile_entier p;
	p.empile(3);
	p.empile(4);
	std::cout << p.depile() << std::endl;
	std::cout << p.vide() << std::endl;
	std::cout << p.depile() << std::endl;
	std::cout << p.vide() << std::endl;

	pile_entier p2 = pile_entier(1);
	p2.empile(37);
	std::cout << p2.pleine() << std::endl;

	return 0;
}
