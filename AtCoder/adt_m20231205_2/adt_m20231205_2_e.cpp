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
    int h, w;
    cin >> h >> w;

    vector<int> s(min(h, w), 0);
    h += 2;
    w += 2;

    char ch[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
            {
                ch[i][j] = '.';
            }
            else
            {
                char tmp;

                cin >> tmp;
                ch[i][j] = tmp;
            }
        }
    }

    for (int i = 1; i < h - 1; i++)
    {
        for (int j = 1; j < w - 1; j++)
        {
            int y = i;
            int x = j;

            if (ch[y][x] == '#')
            {
                ch[y][x] = '.';
                int x_size = 0;

                int d = 1;
                if (ch[y + 1][x - 1] == '#')
                {
                    d = -1;
                }

                for (int k = 1; true; k++)
                {
                    if (ch[y + k][x + (k * d)] == '#')
                    {
                        ch[y + k][x + (k * d)] = '.';
                    }
                    else
                    {
                        x = x + (k - 1) * d;
                        d *= -1;

                        for (int l = 0; l < k; l++)
                        {
                            ch[y + l][x + (l * d)] = '.';
                        }

                        s[(k / 2) - 1]++;
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
        if (i < s.size() - 1)
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
