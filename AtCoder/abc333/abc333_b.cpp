#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string s, t;

    cin >> s >> t;

    int s1, s2;
    int t1, t2;

    s1 = s[0] - 'A';
    s2 = s[1] - 'A';
    t1 = t[0] - 'A';
    t2 = t[1] - 'A';

    int s_diff, t_diff;

    s_diff = abs(s1 - s2);
    t_diff = abs(t1 - t2);

    int s_len, t_len;

    if(s_diff == 1 || s_diff == 4) {
        s_len = 1;
    } else {
        s_len = 2;
    }

    if(t_diff == 1 || t_diff == 4) {
        t_len = 1;
    } else {
        t_len = 2;
    }

    if(s_len == t_len) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
