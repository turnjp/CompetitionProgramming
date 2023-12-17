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
    int n, m;
    string s;

    cin >> n >> m;
    cin >> s;

    int used_t = 0;
    int used_lt = 0;

    int max_t = 0;
    int max_lt = 0;

    for (const char ch : s)
    {
        switch (ch)
        {
        case '1':
            used_t++;
            break;
        case '2':
            used_t++;
            used_lt++;
            break;
        case '0':
            used_t = 0;
            used_lt = 0;
            break;

        default:
            break;
        }
        max_t = max(max_t, used_t);
        max_lt = max(max_lt, used_lt);
    }

    int buy_t = max_t - m;
    buy_t = (buy_t < 0) ? 0 : buy_t;
    int buy_lt = max_lt;

    cout << max(buy_t, buy_lt) << endl;

    return 0;
}
