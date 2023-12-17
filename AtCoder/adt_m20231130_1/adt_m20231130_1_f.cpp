#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, long long>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int main()
{
    int n;
    long long a, b;
    string s;

    cin >> n >> a >> b;
    cin >> s;

    int loop_num = floor(n / 2);
    long long min_cost = LLONG_MAX;
    long long cost = 0;

    for (int i = 0; i < loop_num; i++)
    {
        cost = i * a;
        for (int j = 0; j < loop_num; j++)
        {
            if (s[j] != s[s.length() - j - 1])
            {
                cost += b;
            }
        }
        min_cost = min(min_cost, cost);
        s = s.substr(1) + s[0];
    }

    cout << min_cost << endl;

    return 0;
}
