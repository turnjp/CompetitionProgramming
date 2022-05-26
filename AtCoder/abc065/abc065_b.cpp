#include <bits/stdc++.h>
using namespace std;

#define LLint long long

int main()
{

    int n;

    cin >> n;

    pair<int, bool> as[n];

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        as[i] = make_pair(tmp - 1, false);
    }

    int cr = 0;
    int cnt = 0;
    while (cr != 1)
    {
        if (as[cr].second)
        {
            cnt = -1;
            break;
        }
        as[cr].second = true;
        cr = as[cr].first;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
