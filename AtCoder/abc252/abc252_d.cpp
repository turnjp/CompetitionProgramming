#include <bits/stdc++.h>
using namespace std;

#define LLint long long

int main()
{
    LLint n;

    cin >> n;

    map<LLint, LLint> a_map;

    for (LLint i = 0; i < n; i++)
    {
        LLint tmp;
        cin >> tmp;
        if (a_map.count(tmp) == 0)
        {
            a_map[tmp] = 1;
        }
        else
        {
            a_map[tmp] += 1;
        }
    }

    LLint result = (n * (n - 1) * (n - 2)) / 6;

    for (pair<LLint, LLint> a : a_map)
    {
        LLint tmp = a.second;

        if (tmp >= 3)
        {
            result -= (tmp * (tmp - 1) * (tmp - 2)) / 6;
        }
        if (tmp >= 2 && n - tmp >= 1)
        {
            result -= (tmp * (tmp - 1) / 2) * (n - tmp);
        }
    }

    cout << result << endl;

    return 0;
}
