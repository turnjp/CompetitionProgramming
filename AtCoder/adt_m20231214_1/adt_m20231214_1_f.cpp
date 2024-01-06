#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> cv(n, vector<long long>(n, -1));

    for(int i = 0; i < m; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a -= 1;
        b -= 1;

        cv[b][a] = cv[a][b] = max(c, cv[a][b]);
    }

    vector<int> cp;
    for(int i = 0; i < n; i++) {
        cp.push_back(i);
    }

    long long max_sum = -1;
    do {
        long long sum = 0;
        for(int i = 0; i < n - 1; i++) {
            int curr = cp[i];
            int next = cp[i + 1];
            long long c = cv[curr][next];
            if(c != -1) {
                sum += c;
            } else {
                break;
            }
        }
        max_sum = max(max_sum, sum);

    } while(next_permutation(cp.begin(), cp.end()));

    cout << max_sum << endl;

    return 0;
}
