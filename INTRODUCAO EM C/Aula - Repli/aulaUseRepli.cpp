#include <iostream>
#include <stdio.h>

int main() {
  /*
  int idade = 33;
  char sexo = 'M';

  float idadeMes = 33.3;
  float idadeTalvez = 34;
  float peso;
  bool vivo = false;
  bool maudade = true;
  string nome;
  char objetivo;

   printf("Sua idade %d\n", idade);
   printf("%s Quem é o personagem da história?\n", nome);
   printf("%i Idade exata do personagem.\n", idade);

  printf("Informe seu nome: ");
  scanf("\n%s", &nome);

  printf("Qual o sexo (M/F): ");
  scanf("\n%c", &sexo);

  printf("Informe a sua idade: ");
  scanf("\n%i", &idade);

  printf("Informe seu peso: ");
  scanf("\n%f", &peso);

  printf("Seu objetivo: ");
  scanf("\n%s", &objetivo);
  */

  std::cout << "Informe seu nome: ";
  std::cin >> nome;

  cout << "Informe sua idade: ";
  cin >> idade;

  cout << "Informe peso: ";
  cin >> peso;

  //operadores aritmeticos

  /*
  
    soma => +
    subtracao => -
    multiplicacao => *
    divisao => /
    resto da divisao => %
    
    */

  int x = 10;
  int y = 3;
  cout << "Soma: " << (x + y) << endl; //Apenas no cout endl (tambem quebra linha)