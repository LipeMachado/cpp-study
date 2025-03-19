#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<string> lista = {"Shell", "C++", "ReactJs", "NextJs"};
  vector<string>::iterator inicio = lista.begin();

  cout << "Primeiro do vetor: " << *inicio << endl;

  return 0;
} 