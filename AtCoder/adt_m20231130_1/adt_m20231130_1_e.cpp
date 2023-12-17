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

    char s[h][w];
    int min_x, min_y, max_x, max_y;

    min_x = min_y = 501;
    max_x = max_y = -1;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            char ch;

            cin >> ch;

            s[i - 1][j - 1] = ch;

            if (ch == '#')
            {
                min_x = min(min_x, j);
                max_x = max(max_x, j);
                min_y = min(min_y, i);
                max_y = max(max_y, i);
            }
        }
    }

    for (int i = min_y; i <= max_y; i++)
    {
        for (int j = min_x; j <= max_x; j++)
        {
            if (s[i - 1][j - 1] == '.')
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}
