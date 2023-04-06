#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
  float second;
  cout << "Informe o valor em segundo para transformar em horas, minutos e "
          "segundo ";
  cin >> second;
  float hor = second / 3600;
  cout << hor;
}