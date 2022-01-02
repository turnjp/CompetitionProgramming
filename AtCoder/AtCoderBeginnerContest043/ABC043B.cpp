#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  char result[10];

  cin >> s;

  int cnt = 0;
  for (auto ch : s){
    switch(ch){
    case '0':
    case '1':
      result[cnt] = ch;
      cnt++;
      break;
    case 'B':
      if(cnt > 0){
	cnt--;
      }
      break;
    default:
      break;
    }
  }
  result[cnt] = '\0';

  cout << result << "\n";
  
  return 0;
}
