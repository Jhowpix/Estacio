#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "PORTUGUESE");

	int total_cavalos;
	
	cout << "Informe o total de cavalos: ";
	cin >> total_cavalos;
	
	cout << "Total de ferraduras é " << (total_cavalos * 4);
	
}
