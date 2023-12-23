#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> sv(n);

    for(int i = 0; i < n; i++) {
        cin >> sv[i];
    }

    int max_cnt = -1;
    int cnt = 0;
    for(int i = 0; i < d; i++) {
        int j = 0;
        for(; j < n; j++) {
            if(sv[j][i] == 'x') {
                break;
            }
        }
        if(j == n) {
            cnt++;
        } else {
            max_cnt = max(max_cnt, cnt);
            cnt = 0;
        }
    }
    max_cnt = max(max_cnt, cnt);

    cout << max_cnt << endl;

    return 0;
}
