#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    long long d;
    long long max_n;
    long long min = LLONG_MAX;
    // long long x, y;

    cin >> d;
    max_n = ceil(sqrt(d));

    for (long long x = max_n; x > 0; x--)
    {
        long long y = sqrt(llabs(x * x - d));
        long long tmp;
        for (int i = 0; i <= 1; i++)
        {
            tmp = llabs(x * x + y * y - d);

            if (min > tmp)
            {
                min = tmp;
                if (min == 0)
                {
                    break;
                }
            }

            y++;
        }
    }

    cout << min << endl;

    return 0;
}
