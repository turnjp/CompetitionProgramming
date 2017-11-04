//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  long n,result;

  cin >> n;
  
  for(long i=1;i*i<=n;i++){
    result = i*i;
  }

  cout << result << endl;

  return 0;
}
