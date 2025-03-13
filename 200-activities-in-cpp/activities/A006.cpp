#include <iostream>
using namespace std;

int constante(){
  const int i = 10;
  cout << i << endl;
  i = 30;
  cout << i << endl;
}

int main(){
  constante();
  return 0;
}