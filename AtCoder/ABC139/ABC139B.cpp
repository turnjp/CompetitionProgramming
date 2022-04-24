#include<iostream>
#include<cmath>
using namespace std;

int f(int x){
    return x*x + 2*x + 3;
}

int main(){
    double a,b;

    cin >> a >> b;

    cout << ceil((b-1)/(a-1)) << endl;
}