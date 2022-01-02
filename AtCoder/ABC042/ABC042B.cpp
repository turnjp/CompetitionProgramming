//
//

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n,l;

  cin >> n >> l;

  vector<string> s(n);
  
  for(auto &str : s){
    cin >> str;
  }

  sort(s.begin(),s.end());

  string result = "";

  for(auto str : s){
    result += str;
  }
  
  cout << result << endl;
  
  return 0;
}
