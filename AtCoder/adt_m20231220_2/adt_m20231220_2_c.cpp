#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string s;
    cin >> s;

    bool large_f, small_f;
    large_f = false;
    small_f = false;

    set<char> ch_set;
    bool diff_f = true;

    for(auto &ch : s) {
        if('A' <= ch && ch <= 'Z') {
            large_f = true;
        } else if('a' <= ch && ch <= 'z') {
            small_f = true;
        }
        if(ch_set.find(ch) != ch_set.end()) {
            diff_f = false;
        }

        ch_set.insert(ch);
    }

    if(large_f && small_f && diff_f) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
