#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;

    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << max(((n - 2) * (2 + (n - 1))) / 2 + (n % 2), ((n - 1) * (1 + (n - 1))) / 2) << endl;
    }
}
