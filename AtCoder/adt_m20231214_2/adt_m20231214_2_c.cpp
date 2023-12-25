#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int l, r;
    cin >> l >> r;
    l--;
    r--;

    string s;
    cin >> s;

    string s1, s2, s3;
    s1 = s.substr(0, l);
    s2 = s.substr(l, r - l + 1);
    s3 = s.substr(r + 1, s.length() - r);

    reverse(s2.begin(), s2.end());

    cout << s1 + s2 + s3 << endl;

    return 0;
}
