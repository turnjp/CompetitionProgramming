//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  int s;
  int result;

  cin >> s;

  result = s%10 + s/10%10 + s/100%10;

  cout << result << endl;
  
  return 0;
}
