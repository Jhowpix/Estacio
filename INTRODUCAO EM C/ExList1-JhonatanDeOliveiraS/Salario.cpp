#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
  string name;
  cout << "Informe seu nome: ";
  cin >> name;
  float value;
  cout << "\nInforme seu salário: \n";
  cin >> value;
  float salario = value * 12;
  cout << name << ", seu salario anual é de: R$ " << salario;
}