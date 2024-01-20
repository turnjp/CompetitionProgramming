#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> av(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> av[i];
    }

    vector<long long> sum_i(n + 1, 0);
    sum_i[1] = 2 * av[1];
    for(int i = 2; i <= n; i++) {
        sum_i[i] = sum_i[i - 1] + (i + 1) * av[i];
    }

    vector<long long> sum(n + 1, 0);
    sum[1] = av[1];
    for(int i = 2; i <= n; i++) {
        sum[i] = sum[i - 1] + av[i];
    }

    long long max_v = LLONG_MIN;
    for(int l = 1; l <= n - m + 1; l++) {
        max_v = max(max_v, sum_i[m + l - 1] - sum_i[l - 1] -
                               l * (sum[m + l - 1] - sum[l - 1]));
    }

    cout << max_v << endl;

    return 0;
}
