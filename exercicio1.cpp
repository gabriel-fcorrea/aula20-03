#include <iostream>

using namespace std;

double num1, num2, num3, num4, num5; 

int main() {
	

cout << "Digite o primeiro n�mero: " << endl;
cin >> num1;
cout << "Digite o segundo n�mero: " << endl;
cin >> num2;
cout << "Digite o terceiro n�mero: " << endl;
cin >> num3;
cout << "Digite o quarto n�mero: " << endl;
cin >> num4;
cout << "Digite o quinto n�mero: " << endl;
cin >> num5;

int soma = num1+num2+num3+num4+num5;

double media = soma/5;

cout << "A soma �: " << soma << endl;
cout << "A media �: " << media << endl;

return 0;
}

