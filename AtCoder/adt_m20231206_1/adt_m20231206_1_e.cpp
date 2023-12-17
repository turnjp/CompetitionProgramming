#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, int>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int main()
{
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> a(n);

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    t = t % sum;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > t)
        {
            cout << (i + 1) << " " << t << endl;
            return 0;
        }
        else
        {
            t -= a[i];
        }
    }

    return 0;
}
