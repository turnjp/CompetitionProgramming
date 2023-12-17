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
    string t = "oxxoxxoxxoxxoxxoxxoxxoxxoxxoxx";
    string s;

    cin >> s;

    if (t.find(s) != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
