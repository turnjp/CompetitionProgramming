//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

int main(){
  int n;
  int a;
  int all_or;
  int cnt;

  cin >> n;

  all_or = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    all_or = all_or | a;
  }

  cnt = 0;
  while((all_or&1) != 1){
    all_or = all_or >> 1;
    cnt++;
  }

  cout << cnt << endl;
  
  return 0;
}
