//問題URL
//

//解き方メモ
//
    
#include<iostream>
using namespace std;

#define ADD 0
#define SUB 1

int calc(int num,int op,int abcd){
    if( op == ADD ) {
      num += abcd;
    } else if( op == SUB ) {
      num -= abcd;
    } else {
      exit(-1);
    }

    return num;
}

void print_op(int op){
  if (op == ADD) {
    cout << "+";
  } else if(op == SUB) {
    cout << "-";    
  } else {
    exit(-1);
  }
}

int main(){
  int n;
  int a,b,c,d;

  cin >> n;
  a = n/1000;
  b = n/100%10;
  c = n/10%10;
  d = n%10;

  for (int i = 0; i < 2; i++) {
    int result1 = calc(a,i,b);
    for (int j = 0; j < 2; j++) {
      int result2 = calc(result1,j,c);
      for (int k = 0; k < 2; k++) {
	int result3 = calc(result2,k,d);
	if(result3 == 7){
	  cout << a;
	  print_op(i);
	  cout << b;
	  print_op(j);
	  cout << c;
	  print_op(k);
	  cout << d;
	  cout << "=7" << endl;

	  return 0;
	}
      }
    }
  }

  return 0;
}
