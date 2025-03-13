#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int b = 5;

  float soma = a + b;
  float subtracao = a - b;
  float multiplicacao = a * b;
  float divisao = a / b;
  float resto = a % b;

  cout << "Soma: " << soma << endl;
  cout << "Subtração: " << subtracao << endl;
  cout << "Multiplicação: " << multiplicacao << endl;
  cout << "Divisão: " << divisao << endl;
  cout << "Resto: " << resto << endl;

  return 0;
}