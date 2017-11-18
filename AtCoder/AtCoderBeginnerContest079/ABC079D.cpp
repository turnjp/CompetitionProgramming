//問題URL
//

//解き方メモ
//
    
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

  cin >> h >> w;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> c[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
      if(a[i][j] != -1){
	cnt[ a[i][j] ]++;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    if(i!=1 && cnt[i]>0){
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
      for (int j = 0; j < 10; j++) {
	//cost i -> j
	if(i != j){
	  //cout << c[i][j] << ":" << j << endl;
	  q.push(make_pair(c[i][j],j));
	}
      }
      while(true){
	pair<int,int> p = q.top();
	q.pop();
	//cout << p.first << ":" << p.second << ",";

	if(p.second == 1){
	  cost += cnt[i] * p.first;
	  break;
	} else {
	  for (int k = 0; k < 10; k++) {
	    if(k != p.second){
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
