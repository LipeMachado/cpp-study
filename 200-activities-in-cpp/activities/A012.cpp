#include <iostream>

using namespace std;

int main() {
  int nota1, nota2, nota3;

  cout << "Digite a primeira nota: " << endl;
  cin >> nota1;

  cout << "Digite a segunda nota: " << endl;
  cin >> nota2;

  cout << "Digite a terceira nota: " << endl;
  cin >> nota3;

  float resultado;

  resultado = (nota1 + nota2 + nota3) / 3;
  
  cout << resultado << endl;
}