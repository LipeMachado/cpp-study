#include <iostream>
using namespace std;

float Soma(){
  float a, b;

  cout << "Soma:" << endl;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> a;
  
  cout << "Digite o segundo número: " << endl;
  cin >> b;
  
  float resultado = a + b;
  cout << "Resultado: ";
  return resultado;
}

float Subtracao(){
  float a, b;
  
  cout << "Subtração:" << endl;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> a;
  
  cout << "Digite o segundo número: " << endl;
  cin >> b;
  
  float resultado = a - b;
  cout << "Resultado: ";
  return resultado;
}

float Multiplicacao(){
  float a, b;
  
  cout << "Multiplicação:" << endl;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> a;
  
  cout << "Digite o segundo número: " << endl;
  cin >> b;
  
  float resultado = a * b;
  cout << "Resultado: ";
  return resultado;
}

float Divisao(){
  float a, b;

  cout << "Divisão:" << endl;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> a;
  
  cout << "Digite o segundo número: " << endl;
  cin >> b;
  
  float resultado = a / b;
  cout << "Resultado: ";
  return resultado;
}

void Layout(){
  cout << "1 - Soma" << endl <<
  "2 - Subtração" << endl <<
  "3 - Multiplicação" << endl <<
  "4 - Divisão" << endl <<
  "0 - Sair" << endl;
}

void Line(){
  cout << "-------------------------" << endl;
}

int main(){  
  int choose;
  bool fechar = false;

  while(fechar == false){
    cout << "Selecione uma opção: " << endl;

    Layout();

    cin >> choose;

    switch(choose){
      case 1:
        cout << Soma() << endl;
        Line();
        break;
      case 2:
        cout << Subtracao() << endl;
        Line();
        break;
      case 3:
        cout << Multiplicacao() << endl;
        Line();
        break;
      case 4:
        cout << Divisao() << endl;
        Line();
        break;
      case 0:
        cout << "!Programa encerrado!";
        fechar = true;
        break;
      default:
        cout << "Escolha inválida";
        break;
    };
  }
}