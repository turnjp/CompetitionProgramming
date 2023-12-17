#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, int>
#define VECTOR_TYPE vector<int>

using namespace std;

bool in_mass(int x, int y, int h, int w) { return x >= 0 && y >= 0 && x < w && y < h; }
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main()
{
    int h, w;
    vector<string> mass;

    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        mass.push_back(s);
    }

    string ms = "snuke";
    pair<int, int> mp[5];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                int y = i;
                int x = j;
                bool succ = true;
                for (int l = 0; l < ms.length(); l++)
                {
                    if (in_mass(x, y, h, w) && ms[l] == mass[y][x])
                    {
                        mp[l] = make_pair(y, x);
                    }
                    else
                    {
                        succ = false;
                        break;
                    }
                    y += dy[k];
                    x += dx[k];
                }

                if (succ)
                {
                    for (int l = 0; l < 5; l++)
                    {
                        cout << mp[l].first + 1 << " " << mp[l].second + 1 << endl;
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}
