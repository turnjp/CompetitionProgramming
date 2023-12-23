#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    vector<string> sv(n);
    vector<pair<int, int>> wcv(n, {0, 0});

    for(int i = 0; i < n; i++) {
        cin >> sv[i];
    }

    for(int i = 0; i < n; i++) {
        wcv[i].second = n - i;
        for(int j = 0; j < n; j++) {
            switch(sv[i][j]) {
            case '-':
            case 'x':
                break;
            case 'o':
                wcv[i].first++;
                break;

            default:
                break;
            }
        }
    }

    sort(wcv.rbegin(), wcv.rend());

    for(int i = 0; i < n; i++) {
        cout << n - wcv[i].second + 1;
        if(i < n - 1) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
