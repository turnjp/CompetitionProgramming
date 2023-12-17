#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int lm, ld, y, m, d;

    cin >> lm >> ld >> y >> m >> d;

    d++;

    if (d > ld)
    {
        d -= ld;
        m++;
    }

    if (m > lm)
    {
        m -= lm;
        y++;
    }

    cout << y << " " << m << " " << d << endl;

    return 0;
}
