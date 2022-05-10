#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    int k,n;

    cin >> k >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int result = INT_MAX;
    
    for (int i = 0; i < n-1; i++)
    {
        result = min(result,(k-a[i+1])+a[i]);
    }
    result = min(result,a[n-1]-a[0]);

    cout << result << endl;
}