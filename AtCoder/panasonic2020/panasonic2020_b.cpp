#include<iostream>
using namespace std;

int main(){
    unsigned long long h,w;
    unsigned long long result;

    cin >> h >> w;

    if(h==1 || w==1){
        result = 1;
    } else {
        result = ( (h/2+h%2)*(w/2+w%2) + (h/2)*(w/2) );
    }

    cout << result << endl;
}