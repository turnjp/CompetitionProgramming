#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> av(n);
    for(int i = 0; i < n; i++) {
        cin >> av[i];
    }

    long long max_sum = LLONG_MIN;

    for(int i = 0; i <= n - m; i++) {
        long long sum = 0;
        for(int j = 0; j < m; j++) {
            sum += (j + 1) * av[i + j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;

    return 0;
}
