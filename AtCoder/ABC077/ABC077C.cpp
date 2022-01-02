//問題URL
//http://abc077.contest.atcoder.jp/tasks/arc084_a

//解き方メモ
//a<b,b<c　を考える際、a,b,cの順で考えるとN^3になる。
//bを中心に、a<bとb<cを考えると、N^2となる。
//ただし、それでも計算量が大きいため、a,cの探索はライブラリ（２分探索）を使用する
//計算量がNlogNになる
    
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define A (abc[0])
#define B (abc[1])
#define C (abc[2])

int main(){
  int n;

  //input
  cin >> n;
  vector< vector<long long> > abc(3,vector<long long>(n));
  vector< vector<long long> > a,b,c;

  for(int i=0;i<3;i++){
    for(int j=0;j<n;j++){
      cin >> abc[i][j];
    }
    sort(abc[i].begin(),abc[i].end());
  }

  long long result = 0;
  for (int i = 0; i < n; i++) {
    long long a_cnt = lower_bound(A.begin(),A.end(),B[i]) - A.begin();
    long long b_cnt = C.size() - (upper_bound(C.begin(),C.end(),B[i]) - C.begin());

    result += a_cnt * b_cnt;
  }

  cout << result << endl;
  
  return 0;
}
