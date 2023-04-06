#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
  cout << "Bem Vindo ao estoque da loja\n ";
  string marca;
  cout << "Informe a marca da chuteira do primeiro lote.\n ";
  cin >> marca;
  int chuteiras;
  cout << "Quantidade de chuteiras deste lote da " << marca << " ";
  cin >> chuteiras;
  string marca1;
  cout << "Informe a marca da chuteira do segundo lote.\n ";
  cin >> marca1;
  int chuteiras1;
  cout << "Quantidade de chuteiras deste lote da " << marca1 << " ";
  cin >> chuteiras1;
  string marca2;
  cout << "Informe a marca da chuteira do terceiro lote.\n ";
  cin >> marca2;
  int chuteiras2;
  cout << "Quantidade de chuteiras deste lote da " << marca2 << " ";
  cin >> chuteiras2;

  cout << "Seu estoque possui:\n " << chuteiras << " unidade"
       << " da chuteira " << marca << ".\n " << chuteiras1 << " unidade"
       << " da chuteira " << marca1 << ".\n " << chuteiras2 << " unidade"
       << " da chuteira " << marca2 << ".\n ";
}