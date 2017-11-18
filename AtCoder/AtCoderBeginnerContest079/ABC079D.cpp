//問題URL
//https://beta.atcoder.jp/contests/abc079/tasks/abc079_d

//解き方メモ
//最短経路問題。ダイクストラ法を使用
    
#include<iostream>
#include<queue>
#include<utility>
#include<vector>
using namespace std;

int main(){
  int h,w;
  int c[10][10];
  int a[201][201];
  int cnt[10] = {0,0,0,0,0,0,0,0,0,0};
  int cost = 0;

  //入力（数字カウント含む）
  
  cin >> h >> w;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> c[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
      
      //数字別の件数カウント
      if(a[i][j] != -1){
	cnt[ a[i][j] ]++;
      }
    }
  }

  
  //計算
  
  for (int i = 0; i < 10; i++) {
    //元の数字をスタート、１をゴールとする最短経路問題と考える
    //i=1はゴール済みなので考えない。出現しない数字（cnt==0）も考えない
    if(i!=1 && cnt[i]>0){
      //優先度付きキューを使用する
      //(コスト、現在位置）のpairを要素とする
      //コストが小さい順のキューとなるよう宣言
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
      q.push(make_pair(0,i)); //開始点をキューに入れる。コスト０
      while(true){
	//先頭（コスト最小）を取り出す
	pair<int,int> p = q.top();
	q.pop();

	if(p.second == 1){ //ゴールに到達した場合
	  cost += cnt[i] * p.first;
	  break;
	} else { //到達しなかった場合
	  for (int k = 0; k < 10; k++) {
	    if(k != p.second){ //移動しない場合は考えない。ループしてしまうため
	      q.push(make_pair(p.first+c[p.second][k],k));
	    }
	  }
	}
      }
    }
  }

  cout << cost << endl;
  
  return 0;
}
