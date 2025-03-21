#include <iostream>

using namespace std;

int main() {
	int num, base; 
	
	do{
		cout << "tabuada \n";
		cin >> num;
		for(base = 1; base <= 65465432164; base++)
			cout << num << " * " << base << " = "<< num*base << endl;
		cout << endl;
		num = num-num;
	}while(num!=0);
	return 0;
}

