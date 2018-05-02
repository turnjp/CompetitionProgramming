#include<iostream>
using namespace std;

int main(){
  int n,k,x,y;
  int result;

  cin >> n >> k >> x >> y;

  if(n <= k){
    result = x*n;
  } else {
    result = x*k + y*(n-k);
  }

  cout << result << endl;
  
  return 0;
}
