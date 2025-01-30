#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 9;
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            a[i][j] -= 1;
        }
    }

    // cout << 1 << endl;

    for(int i = 0; i < n; i++) {
        vector<int> cnt(n, 0);
        for(int j = 0; j < n; j++) {
            if(cnt[a[i][j]] > 0) {
                cout << "No" << endl;
                return 0;
            }
            cnt[a[i][j]]++;
        }
    }

    // cout << 2 << endl;

    for(int i = 0; i < n; i++) {
        vector<int> cnt(n, 0);
        for(int j = 0; j < n; j++) {
            if(cnt[a[j][i]] > 0) {
                cout << "No" << endl;
                return 0;
            }
            cnt[a[j][i]]++;
        }
    }

    // cout << 3 << endl;

    int st[9][2] = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3},
                    {3, 6}, {6, 0}, {6, 3}, {6, 6}};
    for(int k = 0; k < n; k++) {
        int y = st[k][0];
        int x = st[k][1];
        vector<int> cnt(n, 0);
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                // cout << y + i << " " << x + j << endl;
                if(cnt[a[y + i][x + j]] > 0) {
                    cout << "No" << endl;
                    return 0;
                }
                cnt[a[y + i][x + j]]++;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
