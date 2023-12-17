#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<vector<int>> a;

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;
        if (i < k)
        {
            vector<int> tv;
            a.push_back(tv);
        }
        a[i % k].push_back(tmp);
    }

    for (int i = 0; i < (int)a.size(); i++)
    {
        sort(a[i].begin(), a[i].end());
    }

    int prev = 0;
    bool result = true;
    for (int i = 0; i < n; i++)
    {
        int tmp = a[i % k][i / k];
        if (tmp < prev)
        {
            result = false;
            break;
        }
        prev = tmp;
    }

    if (result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
