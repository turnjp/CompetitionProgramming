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
    int h, w;
    cin >> h >> w;

    long long a[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            long long tmp;

            cin >> tmp;
            a[i][j] = tmp;
        }
    }

    for (int i1 = 0; i1 < h - 1; i1++)
    {
        for (int i2 = i1 + 1; i2 < h; i2++)
        {
            for (int j1 = 0; j1 < w - 1; j1++)
            {
                for (int j2 = j1; j2 < w; j2++)
                {
                    if (a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2])
                    {
                        cout << "No" << endl;

                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
