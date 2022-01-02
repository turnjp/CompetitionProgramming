#include<iostream>
using namespace std;

int main(){
  int score[] = {0,13,1,2,3,4,5,6,7,8,9,10,11,12};
  
  int a,b;

  cin >> a >> b;

  if(score[a] > score[b]){
    cout << "Alice" << "\n";
  } else if(score[a] < score[b]){
    cout << "Bob" << "\n";
  } else {
    cout << "Draw" << "\n";
  }
  
  return 0;
}
