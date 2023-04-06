#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(void) {
  float value1;
  float value2;
  cout << "Digite um valor\n";
  cin >> value1;
  cout << "Digite o segundo valor\n";
  cin >> value2;

  float soma = value1 + value2;
  cout << "A soma de " << value1 << " + " << value2 << " é igual a: " << soma
       << "\n";
  float v1 = pow(value1, value2);
  float num = sqrt(soma);

  cout << soma << " elevado ao quadrado é " << v1 << "\n";
  cout << " \nA raiz quadrada de  " << soma << " é " << num;
}