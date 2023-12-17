#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n, s, m, l;

    cin >> n >> s >> m >> l;

    long long min = LLONG_MAX;

    for (int i = 0; true; i++)
    {
        for (int j = 0; true; j++)
        {
            for (int k = 0; true; k++)
            {
                if (i * 6 + j * 8 + k * 12 >= n)
                {
                    long long tmp = i * s + j * m + k * l;

                    if (tmp < min)
                    {
                        min = tmp;
                    }

                    break;
                }
            }
            if (i * 6 + j * 8 >= n)
            {
                break;
            }
        }
        if (i * 6 >= n)
        {
            break;
        }
    }

    cout << min << endl;

    return 0;
}
