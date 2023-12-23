#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> abv[2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            long long tmp;
            cin >> tmp;
            abv[i].push_back(tmp);
        }
    }

    int cabi[4] = {0, 0, 1, 1};
    int nabi[4] = {0, 1, 0, 1};

    for(int i = 0; i < n - 1; i++) {
        int j = 0;
        for(; j < 4; j++) {
            long long x1 = abv[cabi[j]][i];
            long long x2 = abv[nabi[j]][i + 1];
            if(abs(x1 - x2) <= k) {
                break;
            }
        }
        if(j == 4) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
