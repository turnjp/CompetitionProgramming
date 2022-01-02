//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  int n;
  int tmp;
  int dsum;
  
  cin >> n;

  tmp = n;
  dsum = 0;
  for (int i = 0; tmp > 0; i++) {
    dsum += tmp%10;
    tmp /= 10;
  }

  if (n%dsum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;    
  }
  
  return 0;
}
