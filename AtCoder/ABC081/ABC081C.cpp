//問題URL
//

//解き方メモ
//
    
#include<iostream>
#include<map>
#include<queue>
using namespace std;

int main(){
  int n,k;
  map<int,int> m;
  int a;
  int num;
  int result;

  //ボールの数が少ない順の優先度付きキュー
  priority_queue<int,vector<int>,greater<int>> q;

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if(m[a] == 0){
      m[a] = 1;
    } else {
      m[a]++;
    }
  }

  //種類数
  num = m.size();

  //キューに入れる
  for(auto itr = m.begin(); itr != m.end(); ++itr) {
    q.push( itr->second );
  }

  //登場数の少ない順に１種類ずつ取り出す
  result = 0;
  while (num>k){
    result += q.top();
    q.pop();
    num--;
  }

  cout << result << endl;
  
  return 0;
}
