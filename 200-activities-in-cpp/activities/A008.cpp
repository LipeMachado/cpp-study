#include <iostream>
using namespace std;

int main(){
	char nome[30];
	char sobrenome[50];
	
	cout << "Digite seu nome: " << endl;
	cin >> nome;
	cout << "Agora seu sobrenome: " << endl;
	cin >> sobrenome;
	
	cout << "Bem vindo " << nome << " " <<  sobrenome << " !" << endl;
}