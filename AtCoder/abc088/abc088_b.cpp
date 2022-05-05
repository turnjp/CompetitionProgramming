#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum_a,sum_b;

    sum_a = sum_b = 0;


    sort(a,a+n,greater<int>());
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0){
            sum_a += a[i];
        } else {
            sum_b += a[i];
        }
    }

    cout << sum_a - sum_b << endl;

}