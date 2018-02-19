//問題URL
//

//解き方メモ
//
    
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
  int n;
  int maxIdx,minIdx;
  int max,min;

  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  maxIdx = distance( v.begin(), max_element(v.begin(),v.end()) );
  minIdx = distance( v.begin(), min_element(v.begin(),v.end()) );

  max = v[maxIdx];
  min = v[minIdx];

  if (abs(max) >= abs(min)) {
    
    cout << 2*n-1 << endl;

    for (int i = 1; i <= n; i++) {
      cout << maxIdx+1 << " " << i << endl;
    }
    for (int i = 1; i < n; i++) {
      cout << i << " " << i+1 << endl;
    }
    
  } else if(abs(max) < abs(min)) {
    
    cout << 2*n-1 << endl;

    for (int i = 1; i <= n; i++) {
      cout << minIdx+1 << " " << i << endl;
    }
    for (int i = n; i > 1; i--) {
      cout << i << " " << i-1 << endl;
    }
    
  }
  
  return 0;
}
