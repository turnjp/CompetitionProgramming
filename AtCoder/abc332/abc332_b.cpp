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
    int k, g_max, m_max, g, m;
    g = m = 0;

    cin >> k >> g_max >> m_max;

    for (int i = 0; i < k; i++)
    {
        if (g == g_max)
        {
            g = 0;
        }
        else if (m == 0)
        {
            m = m_max;
        }
        else
        {
            if ((g_max - g) > m)
            { // グラスに全て移せるか
                g += m;
                m = 0;
            }
            else
            {
                int tmp = g_max - g;
                g = g_max;
                m -= tmp;
            }
        }
    }

    cout << g << " " << m << endl;

    return 0;
}
