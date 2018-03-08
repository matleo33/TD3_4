#include <iostream>

#define MAX1 100;

using namespace std;

int main() {
  static const int MAX2 = 100;
  
  int p1 = MAX1;
  int *p2 = (int *) &MAX2;
}
