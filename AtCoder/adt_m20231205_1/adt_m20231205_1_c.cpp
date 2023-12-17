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
    int n;
    vector<PAIR_TYPE> v;

    v.push_back(make_pair(-1, -1));
    v.push_back(make_pair(-1, -1));

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;

        v.push_back(make_pair(a, i));
        sort(v.rbegin(), v.rend());
        v.pop_back();
    }

    cout << v[1].second + 1 << endl;

    return 0;
}
