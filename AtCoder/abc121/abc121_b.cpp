#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m,c;
    int correct_cnt=0;

    cin >> n >> m >> c;

    int b[m];
    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    int attr_sum,a;
    for(int i=0;i<n;i++){
        attr_sum = c;
        for(int j=0;j<m;j++){
            cin >> a;
            attr_sum += a*b[j];
        }
        if(attr_sum > 0){
            correct_cnt++;
        }
    }

    cout << correct_cnt << endl;
}