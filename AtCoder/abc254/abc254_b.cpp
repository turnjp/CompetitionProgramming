#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;

    cin >> n;

    ll a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                cout << 1;
                a[i][j] = 1;
            }
            else
            {
                ll tmp = a[i - 1][j] + a[i - 1][j - 1];
                cout << tmp;
                a[i][j] = tmp;
            }

            if (j != i)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    return 0;
}
