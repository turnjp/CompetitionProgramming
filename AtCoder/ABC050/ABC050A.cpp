#include<iostream>
using namespace std;

int main(){
  
  int a,b;
  string op;

  cin >> a >> op >> b;

  if (op == "+") {
    cout << a+b << "\n";
  } else {
    cout << a-b << "\n";
  }
  
  return 0;
}
