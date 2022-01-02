//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  int n,a,b;
  int result;

  cin >> n >> a >> b;

  result = min(a*n,b);

  cout << result << endl;
  
  return 0;
}
