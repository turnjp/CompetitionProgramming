#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, int>
#define VECTOR_TYPE vector<int>

using namespace std;

// bool in_mass(int x, int y, int h, int w) { return x >= 0 && y >= 0 && x < w && y < h; }
// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (x < 0)
    {
        x *= -1;
        y *= -1;
        z *= -1;
    }

    if (0 < y && y < x)
    {
        if (y < z)
        {
            cout << -1 << endl;
        }
        else if (0 < z)
        {
            cout << x << endl;
        }
        else
        {
            cout << x + (-2 * z) << endl;
        }
    }
    else
    {
        cout << x << endl;
    }

    return 0;
}
