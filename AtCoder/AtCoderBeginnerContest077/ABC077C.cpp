//問題URL
//

//解き方メモ
//
    
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;

  


  //input
  cin >> n;
  vector< vector<int> > abc(3,vector<int>(n));

  for(int i=0;i<3;i++){
    for(int j=0;j<n;j++){
      cin >> abc[i][j];
    }
  }
  
  //sort A,B,C
  for(int i=0;i<3;i++){
    sort(abc[i].begin(),abc[i].end());
  }

  //
  int cnt_all = 0; //結果
  vector<int> cnt_b(n,-1);
  //int j_start = 0;
  //int k_start = 0;
  
  for(int i=0;i<n;i++){
    //bool j_flag=false;
    vector<int>::iterator it1 = upper_bound(abc[1].begin(),abc[1].end(),abc[0][i]);
    
    for(;it1 != abc[1].end();++it1){
      //Aiより大きなBjを見つけた
      if(abc[0][i] < *it1){
	//if(!j_flag){
	//  j_flag = true;
	//  j_start = j;
	//}
	int j = it1-abc[1].begin();
	if(cnt_b[j] > -1){
	  //Bjからの組み合わせ数が計算済み
	  cnt_all += *it1;
	} else {
	  //Bjからの組み合わせ数を計算
	  //bool k_flag=false;
	  vector<int>::iterator it2 = upper_bound(abc[2].begin(),abc[2].end(),*it1);	  
	  cnt_b[j] = 0; //Bjより大きなCkが見つからなかった時、Bjの組み合わせ数0
	  for(;it2 != abc[2].end();++it2){
	    //if(!k_flag){
	    //k_flag = true;
	    //  k_start = k;
	    //}
	    //Bjより大きなCkを見つけた
	    if(*it1 < *it2){
	      int k = it2-abc[2].begin();
	      cnt_b[j] = n-k;
	      cnt_all += n-k;
	      break;
	    }
	  }
	}
      }
    }
  }

  cout << cnt_all << endl;

  return 0;
}
