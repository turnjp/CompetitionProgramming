#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string s;
    cin >> s;

    long long number = 0;
    long long x = 1;
    for(int i = 0; i < s.length(); i++) {
        number += (s[s.length() - i - 1] - 'A' + 1) * x;
        x *= 26;
    }

    cout << number << endl;

    return 0;
}
