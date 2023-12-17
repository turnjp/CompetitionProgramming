#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, int>
#define VECTOR_TYPE vector<int>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int main()
{
    long long n, t;

    cin >> n >> t;

    long long c[n];
    long long r[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (long long i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    pair<long long, long long> same_max(-1, -1);
    pair<long long, long long> t_max(-1, -1);
    long long same_color;

    for (long long i = 0; i < n; i++)
    {
        if (i == 0)
        {
            same_color = c[i];
        }

        if (c[i] == t)
        {
            t_max = max(t_max, make_pair(r[i], i));
        }

        if (c[i] == same_color)
        {
            same_max = max(same_max, make_pair(r[i], i));
        }
    }

    if (t_max.first != -1)
    {
        cout << t_max.second + 1 << endl;
    }
    else
    {
        cout << same_max.second + 1 << endl;
    }

    return 0;
}
