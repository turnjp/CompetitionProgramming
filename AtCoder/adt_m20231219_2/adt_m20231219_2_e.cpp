#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    map<string, int> smap;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if(smap.find(s) == smap.end()) {
            cout << s << endl;
            smap[s] = 1;
        } else {
            cout << s << "(" << smap[s] << ")" << endl;
            smap[s]++;
        }
    }

    return 0;
}
