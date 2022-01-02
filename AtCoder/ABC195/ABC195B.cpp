#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,w; //a<=b
    int maxn,minn;
    
    cin >> a >> b >> w;
    w *= 1000;

    maxn = (int)(w/a);
    minn = ceil(w/b);

    if(maxn < minn){
        cout << "UNSATISFIABLE" << endl;
    } else {
        cout << minn << " " << maxn << endl;
    }
}