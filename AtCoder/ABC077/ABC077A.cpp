//問題URL
//

//解き方メモ
//
    
#include<iostream>
#include<string>
using namespace std;

int main(){
  string c[2];

  //C入力
  for(int i=0;i<2;i++){
    cin >> c[i];
  }

  bool f = true;
  for(int i=0;i<3;i++){
    if(c[0][i] != c[1][2-i]){
      f = false;
      break;
    }
  }

  if(f){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
