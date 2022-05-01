#include<iostream>
#include<cmath>
using namespace std;

int main(){
    string a,b;
    int ab;

    cin >> a >> b;
    ab = stoi(a+b);

    double sqrt_ab = sqrt(ab);
    if(sqrt_ab - int(sqrt_ab) == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}