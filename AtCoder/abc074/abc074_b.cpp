#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k;

    cin >> n >> k;
    
    int xs[n];
    for(int i=0;i<n;i++){
        cin >> xs[i];
    }
    
    int result = 0;
    for(int x:xs){
        result += min(x,k-x)*2;
    }

    cout << result << endl;
}