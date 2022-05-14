#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int x[n];
    int max_x=0;
    int min_x=101;
    for(int i=0;i<n;i++){
        cin >> x[i];
        if(x[i]>max_x){
            max_x = x[i];
        }
        if(x[i]<min_x){
            min_x = x[i];
        }
    }
    long long result = LLONG_MAX;
    for(int i=min_x;i<=max_x;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum += (x[j]-i)*(x[j]-i);
        }
        if(sum < result){
            result = sum;
        }
    }

    cout << result << endl;
}