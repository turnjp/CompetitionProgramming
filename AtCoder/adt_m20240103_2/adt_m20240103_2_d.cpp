#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> stronger(n, vector<int>(0));
    vector<bool> info(n, true);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        stronger[b].push_back(a);
    }
    for(int i = 0; i < n; i++) {
        if(stronger[i].size() > 0) {
            info[i] = false;
        }
    }
    int cnt = 0;
    int result;
    for(int i = 0; i < n; i++) {
        if(info[i]) {
            cnt++;
            result = i;
        }
    }
    if(cnt > 1) {
        cout << -1 << endl;
    } else {
        cout << result + 1 << endl;
    }

    return 0;
}
