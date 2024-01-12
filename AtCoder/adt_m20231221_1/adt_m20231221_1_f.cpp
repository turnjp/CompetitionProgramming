#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    vector<string> rv(n);
    for(auto &r : rv) {
        cin >> r;
    }
    vector<int> cnt(10, 0);
    for(int t = 0; true; t++) {
        int i = t % 10;
        set<char> s;
        for(int j = 0; j < n; j++) {
            s.insert(rv[j][i] - '0');
        }
        for(int j = 0; j < 10; j++) {
            if(s.find(j) != s.end()) {
                cnt[j]++;
                if(cnt[j] == n) {
                    cout << t << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
