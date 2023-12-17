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
    int n, s, k;
    long long sum = 0;

    cin >> n >> s >> k;

    for (int i = 0; i < n; i++)
    {
        int p, q;

        cin >> p >> q;

        sum += p * q;
    }

    if (sum < s)
    {
        sum += k;
    }

    cout << sum << endl;

    return 0;
}
