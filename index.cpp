#include <iostream>

using namespace std;

int main() {
	int teste;
	int base = 5;
	cout << "digite um numero \n";
	cin >> teste;
	
	do {
		cout << "testando o dowhile" << teste << "vezes" << endl;
		teste ++;
	}
	
	while(teste < base);
}

