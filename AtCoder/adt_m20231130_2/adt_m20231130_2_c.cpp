#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, long long>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

long long sf(int a, int b, int c)
{
    return (long long)a + b + c;
}

long long tf(int a, int b, int c)
{
    return (long long)a * b * c;
}

int main()
{
    int s, t;
    long long cnt = 0;

    cin >> s >> t;

    int a, b, c;
    a = b = c = 0;

    for (; sf(a, b, c) <= s && tf(a, b, c) <= t; ++a, c = b = a)
    {
        for (; sf(a, b, c) <= s && tf(a, b, c) <= t; ++b, c = b)
        {
            for (; sf(a, b, c) <= s && tf(a, b, c) <= t; c++)
            {
                if (a == b && b == c)
                {
                    cnt++;
                }
                else if (a != b && b != c && c != a)
                {
                    cnt += 6;
                }
                else
                {
                    cnt += 3;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
