#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

set<ll, greater<int>> s;

int main()
{
    int n;

    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        ll sq = i * i;
        s.insert(sq);

        int tmp_cnt = 1;
        auto itr = s.find(i);
        if (itr != s.end())
        {
            itr++;
            while (*itr > 1)
            {
                if (sq == (*itr) * (*itr))
                {
                    sq = *itr;
                    tmp_cnt *= 2;
                }
                itr++;
            }
        }
        cnt += tmp_cnt;
        if (i != 1)
        {
            cnt += 2;
        }
    }

    cout << cnt << endl;

    return 0;
}
