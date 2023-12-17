#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<long long, int>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int main()
{
    int n, m;

    cin >> n >> m;

    vector<PAIR_TYPE> st;

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;

        st.push_back(make_pair(tmp % 1000, 1));
    }

    for (int i = 0; i < m; i++)
    {
        int tmp;

        cin >> tmp;

        st.push_back(make_pair(tmp, 2));
    }

    sort(st.begin(), st.end());

    int cnt = 0;
    int same_cnt;
    int prev_s = 1000;
    for (const PAIR_TYPE &ste : st)
    {
        if (ste.first != prev_s)
        {
            if (ste.second == 1)
            {
                same_cnt = 1;
                prev_s = ste.first;
            }
            else if (ste.second == 2)
            {
                same_cnt = 0;
            }
        }
        else if (ste.second == 1)
        {
            same_cnt++;
        }
        else if (ste.second == 2)
        {
            cnt += same_cnt;
            same_cnt = 0;
        }
    }

    cout << cnt << endl;

    return 0;
}
