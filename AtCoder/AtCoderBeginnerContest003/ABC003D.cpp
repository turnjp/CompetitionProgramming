//問題URL
//http://abc003.contest.atcoder.jp/tasks/abc003_4

//解き方メモ
//再帰呼び出しで全パターン網羅
//
//
    
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int r,c,x,y;

int rec(int i,int j,int d,int l,int top,int bottom, int left, int right){

  cout << i << ' ' << j << ' ' << d << ' ' << l <<endl;
  /* 終了判定 */

  //配置するものが無いか
  if( d == 0 && l == 0 ){
    //上下左右の範囲の幅高さがXYと一致するか
    //    if( right-left+1 == y && bottom-top+1 == x ){
      return 1; //一致する（１パターン成功）
      //    } else {
      //      return 0; //一致しない（成功せず）
      //    }
  }

  
  /* 次の配置場所を計算 */
  
  if( i+1 <= top+x-1 ){ //一つ下に配置できるか（一つ下が区画内か）
    i = i+1;
  } else if( j+1 <= left+y-1 ){ //一つ右の列に配置できるか（一つ右が区画内か）
    i = bottom-x+1; //上下は区画内の一番上から
    i = (i<0)?0:i; //マイナスは0に変換
    j = j+1;
  } else { //配置できる場所がない場合
    return 0;
  }


  /* 再帰呼び出し */
  
  int result = 0;
  
  //何も配置しない
  result += rec(i,j,d,l,top,bottom,left,right);

  //何か配置する場合、区画の上下左右を更新
  if(i < top)
    top = i;
  if(i > bottom)
    bottom = i;
  if(j < left)
    left = j;
  if(j > right)
    right = j;
  
  //デスク配置
  if(d > 0){
    result += rec(i,j,d-1,l,top,bottom,left,right);
  }
  
  //サーバーラック配置
  if(l > 0){
    result += rec(i,j,d,l-1,top,bottom,left,right);
  }

  return result;
    
}

int main(){

  int d,l;

  //入力
  cin >> r >> c >> x >> y >> d >> l;

  //計算・出力
  cout << rec(0,0,d,l,0,0,0,0) << endl;

  return 0;
}
