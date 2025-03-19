#include <iostream>
using namespace std;

int main(){
  int x = 369;
  int *y = &x;

  cout << "O valor de x é: " << x << '\n';
  cout << "O valor de y é: " << y << '\n';
  cout << "O valor de y é: " << *y << '\n';

  return 0;
}