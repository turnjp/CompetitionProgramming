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

    cin >> n;

    vector<int> p(n);
    vector<int> q(n);

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        q[tmp - 1] = i;
    }

    for (int i = 0; i < n; i++)
    {
        cout << q[i] + 1;
        if (i < n - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
