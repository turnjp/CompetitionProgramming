//問題URL
//

//解き方メモ
//
    
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

#define MAX_SHOP_NUM 100
#define TZ_NUM 10

int main(){
  int n;
  vector<int> f;
  vector< vector<int> > p;
  long long max_sum = LLONG_MIN;

  //input
  cin >> n;

  f.resize(n);
  p.resize(n);

  //Fは２進数表記とする
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < TZ_NUM; j++) {
      int tmp;
      cin >> tmp;

      f[i] <<= 1; //左シフト
      if(tmp == 1){
	f[i] += 0x1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    p[i].resize(TZ_NUM+1);
    for (int j = 0; j < TZ_NUM+1; j++) {
      cin >> p[i][j];
    }
  }

  //proc
  int tz = 1;
  while (tz < 0x400) { //11111111までループ

    long long tmp_sum = 0;
    for (int i = 0; i < (int)f.size(); i++) {
      //cout << i << ")";
      int tz_diff = f[i] & tz; //tz_diff:時間帯が重なるビットが1
      int cnt = 0;
      while(tz_diff>0){
	cnt += tz_diff & 0x1;
	tz_diff >>= 1;
	//cout << cnt << ",";
      }
      tmp_sum += p[i][cnt];
    }
    //cout << tz << "," << ","<< tmp_sum << endl;
    max_sum = max(max_sum,tmp_sum);
    tz += 0x1;
  }
  //cout << p[1][0] << endl;;

  cout << max_sum << endl;
  
  return 0;
}
