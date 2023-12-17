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
    int h, w;

    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int a;

            cin >> a;

            if (a == 0)
            {
                cout << ".";
            }
            else
            {
                cout << (char)('A' + (a - 1));
            }
        }
        cout << endl;
    }

    return 0;
}
