#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
  string name;
  cout << "Informe seu nome: ";
  cin >> name;
  float nota1;
  cout << name << ", informe sua primeira nota: \n";
  cin >> nota1;
  float nota2;
  cout << name << ", informe sua segunda nota: \n";
  cin >> nota2;
  float nota3;
  cout << name << ", informe sua terceira nota: \n";
  cin >> nota3;
  float nota4;
  cout << name << ", informe sua quarta nota: \n";
  cin >> nota4;
  float media = (nota1 + nota2 + nota3 + nota4) / 2;
  cout << name << ", sua média é de:  " << media;
}

