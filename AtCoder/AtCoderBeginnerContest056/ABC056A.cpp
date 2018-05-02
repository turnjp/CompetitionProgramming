#include<iostream>
using namespace std;

int main(){

  char a,b;
  bool result=true;

  cin >> a >> b;

  if(a == 'D'){
    result = !result;
  }

  if(b == 'D'){
    result = !result;
  }

  if (result) {
    cout << "H" << "\n";
  } else {
    cout << "D" << "\n";
  }
  
  return 0;
}
