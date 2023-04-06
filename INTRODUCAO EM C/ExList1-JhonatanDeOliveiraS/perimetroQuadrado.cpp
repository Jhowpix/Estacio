#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
  float lado;
  cout <<"Informe o lado de um quadrado para descobrirmos seu perimetro:\n";
 cin >> lado;
  float perimetro = 4 * lado;
  cout << "O perimetro de um quadrado cujo lado é : " << lado << " é de: " << perimetro << ".";
  
}