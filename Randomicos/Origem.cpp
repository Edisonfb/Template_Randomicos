#include "Gerador.h"
#include <iostream>
using namespace std;
int main() {

	Gerador gerar;
	for (int i = 0; i < 10; i++) {
		cout << gerar.Random() << endl;
	}



	cout << gerar.Uniforme(8, 20) << endl;
	cout << gerar.Exponencial(5) << endl;
	cout << gerar.normal(7, 2) << endl;

	system("pause");
	return 0;
}