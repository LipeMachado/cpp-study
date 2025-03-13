#include <iostream>
using namespace std;

int main(){
  int inteiro = 13;
	float flutuante = 13.43;
	double dobro = 23.2;
	char nome[20] = "Felipe";
	bool boleano = true;
	
	cout << inteiro << endl;
	cout << flutuante << endl;
	cout << dobro << endl;
	cout << nome << endl;
	if(boleano == 1)
		cout << "True" << endl;
	else if (boleano == 0)
		cout << "False" << endl;
}