//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  int n;

  cin >> n;

  int prev = n%10;
  int cnt=1;
  n = n/10;
  for (int i = 0; i < 3; i++) {
    if(prev == n%10){
      cnt++;
    } else {
      if(cnt < 3)
	cnt=1;
      else
	break;
    }
    prev = n%10;
    n = n/10;
  }

  if(cnt >= 3)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
