#include <iostream>
using namespace std;

void VariableLocal(){
  string localVariable = "Local1";
}

string globalVariable = "Global1";

int main(){
  cout << globalVariable << endl;
  globalVariable = "Global2";
  cout << globalVariable << endl;

  VariableLocal();
  //localVariable = "Local2";
}