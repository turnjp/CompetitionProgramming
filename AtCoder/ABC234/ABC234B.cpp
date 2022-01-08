#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n;

    cin >> n;

    int x[n],y[n];

    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }

    double tmp,result;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            tmp = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
            result = max(result,tmp);
        }
    }

    cout << fixed;
    cout << setprecision(10) << result << endl;
}