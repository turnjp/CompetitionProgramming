#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    bool prefix_flag = t.starts_with(s);
    bool suffix_flag = t.ends_with(s);

    if(prefix_flag && suffix_flag) {
        cout << 0 << endl;
    } else if(prefix_flag && !suffix_flag) {
        cout << 1 << endl;
    } else if(!prefix_flag && suffix_flag) {
        cout << 2 << endl;
    } else if(!prefix_flag && !suffix_flag) {
        cout << 3 << endl;
    }

    return 0;
}
