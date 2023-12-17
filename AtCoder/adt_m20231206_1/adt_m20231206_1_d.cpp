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
    int n, q;
    cin >> n >> q;

    vector<int> p(n, 0);

    for (int i = 0; i < q; i++)
    {
        int t1, t2;

        cin >> t1 >> t2;
        t2--;

        switch (t1)
        {
        case 1:
            p[t2] += 1;
            break;
        case 2:
            p[t2] += 2;
            break;
        case 3:
            if (p[t2] >= 2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;

        default:
            break;
        }
    }

    return 0;
}
