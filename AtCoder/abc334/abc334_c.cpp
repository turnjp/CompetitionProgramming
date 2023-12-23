#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> sc(n, 2);
    for(int i = 0; i < k; i++) {
        int tmp;
        cin >> tmp;
        sc[tmp - 1] -= 1;
    }

    vector<long long> nv;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < sc[i]; j++) {
            nv.push_back(i);
        }
    }

    long long min_sum = LLONG_MAX;
    do {
        long long sum = 0;
        for(int i = 0; i < (long long)(nv.size() / 2); i++) {
            sum += abs(nv[i * 2] - nv[i * 2 + 1]);
        }
        min_sum = min(min_sum, sum);
    } while(next_permutation(nv.begin(), nv.end()));

    cout << min_sum << endl;

    return 0;
}
