#include<iostream>
using namespace std;

int main(){
  
  string s;

  cin >> s;

  s[5] = s[13] = ' ';

  cout << s << "\n";
  
  return 0;
}
