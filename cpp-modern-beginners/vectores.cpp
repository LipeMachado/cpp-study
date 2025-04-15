#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<string> lista;
  lista.push_back("Shell");
  lista.push_back("C++"); 
  lista.push_back("ReactJs");
  lista.push_back("NextJs");
  vector<string>::iterator inicio = lista.begin();

  cout << "Primeiro do vetor: " << *inicio << endl;

  return 0;
} 