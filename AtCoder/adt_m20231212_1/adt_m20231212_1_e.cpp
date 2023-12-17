#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n, k;

    cin >> n >> k;

    vector<pair<long long, long long>> abv(n, pair(0, 0));

    for(int i = 0; i < n; i++) {
        cin >> abv[i].first >> abv[i].second;
    }

    sort(abv.rbegin(), abv.rend());

    long long sum = 0;
    for(const auto &ab : abv) {
        if(sum + ab.second > k) {
            cout << ab.first + 1 << endl;
            return 0;
        }
        sum += ab.second;
    }
    cout << 1 << endl;

    return 0;
}
