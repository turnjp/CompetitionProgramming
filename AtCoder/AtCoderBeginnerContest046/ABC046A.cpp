#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  int result=0;

  cin >> a >> b >> c;

  result++;

  if(b != a){
    result++;
  }

  if(c != a && c!=b){
    result++;
  }
  
  cout << result << endl;
  
  return 0;
}
