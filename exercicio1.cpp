#include <iostream>

using namespace std;

double num1, num2, num3, num4, num5; 

int main() {
	

cout << "Digite o primeiro número: " << endl;
cin >> num1;
cout << "Digite o segundo número: " << endl;
cin >> num2;
cout << "Digite o terceiro número: " << endl;
cin >> num3;
cout << "Digite o quarto número: " << endl;
cin >> num4;
cout << "Digite o quinto número: " << endl;
cin >> num5;

int soma = num1+num2+num3+num4+num5;

double media = soma/5;

cout << "A soma é: " << soma << endl;
cout << "A media é: " << media << endl;

return 0;
}

