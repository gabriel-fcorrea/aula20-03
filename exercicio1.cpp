#include <iostream>

using namespace std;

double nota1, nota2, nota3;

int main() {

cout << "Digite a primeira nota: " << endl;
cin >> nota1;
cout << "Digite a segunda nota: " << endl;
cin >> nota2;
cout << "Digite a terceira nota: " << endl;
cin >> nota3;
	
double media = (nota1+nota2+nota3)/3;

cout << "A sua media foi: " << media << endl;

	if (media == 10){
cout << "Excelente!";
}
else if (media >= 9 && media < 10){
cout << "Muito bom!";
}
else if (media >= 7 && media < 9){
cout << "Bom";
}
else if (media >= 6 && media < 7){
cout << "Regular";
}
else
{
cout << "Insuficiente";
}
return 0;
}

