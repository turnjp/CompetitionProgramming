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
    int a[10][10];
    long long max_v = -1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long tmp;
        cin >> tmp;

        for (int j = n - 1; j >= 0; j--)
        {
            a[i][j] = tmp % 10;
            tmp /= 10;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // 開始点：i,j
            long long num[8]; // 8方向
            for (int k = 0; k < 8; k++)
            {
                num[k] = 0;
            }

            for (int k = 0; k < n; k++)
            {
                num[0] = num[0] * 10 + a[i][(j + k) % n];
                num[1] = num[1] * 10 + a[i][(n + j - k) % n];
                num[2] = num[2] * 10 + a[(i + k) % n][j];
                num[3] = num[3] * 10 + a[(n + i - k) % n][j];
                num[4] = num[4] * 10 + a[(i + k) % n][(j + k) % n];
                num[5] = num[5] * 10 + a[(n + i - k) % n][(j + k) % n];
                num[6] = num[6] * 10 + a[(i + k) % n][(n + j - k) % n];
                num[7] = num[7] * 10 + a[(n + i - k) % n][(n + j - k) % n];
            }

            for (int k = 0; k < 8; k++)
            {
                max_v = max(max_v, num[k]);
            }
        }
    }

    cout << max_v << endl;

    return 0;
}
