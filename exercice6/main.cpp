#include <iostream>

int main()
{
	
	int pP = 1;
	int const qP = 2; 
	int rP = 3;
	int *p = &pP;
//	const int *q = &qP;
//	int * const r = &rP;
	
	p = new int(2);
	std::cout << *p << std::endl;

//	int * const r;
//	r = new int(3);

	const int* q;
	q = new int(3);
	std::cout << *q << std::endl;

	q = p;
	std::cout << *q << std::endl;

	return 0;
}
