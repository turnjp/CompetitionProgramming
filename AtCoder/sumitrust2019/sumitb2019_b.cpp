#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;

    cin >> n;

    int result = ceil(n/1.08);
    if(floor(result*1.08) == n){
        cout << result << endl;
    } else {
        cout << ":(" << endl;
    }
}