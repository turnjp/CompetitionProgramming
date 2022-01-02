//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  int n;

  cin >> n;

  if(n==1){
    cout << 1 << endl;
  }else{
    long long l_prev2 = 2;
    long long l_prev1 = 1;
    long long l;

    for (int i = 2; i <= n; i++) {
      l = l_prev2+l_prev1;
      l_prev2 = l_prev1;
      l_prev1 = l;
    }

    cout << l << endl;
  }

  return 0;
}
