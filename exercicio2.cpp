#include <iostream>

using namespace std;

double num1, num2, num3, num4, num5; 

int main() {
	

cout << "Digite o primeiro numero: " << endl;
cin >> num1;
cout << "Digite o segundo numero: " << endl;
cin >> num2;
cout << "Digite o terceiro numero: " << endl;
cin >> num3;
cout << "Digite o quarto numero: " << endl;
cin >> num4;
cout << "Digite o quinto numero: " << endl;
cin >> num5;

int soma = num1+num2+num3+num4+num5;

double media = soma/5;

cout << "A soma eh: " << soma << endl;
cout << "A media eh: " << media << endl;

return 0;
