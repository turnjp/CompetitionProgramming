#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int cnt=0;
    while(n>1){
        n /= 2;
        cnt++;
    }

    cout << pow(2,cnt) << endl;

}