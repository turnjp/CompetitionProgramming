#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> av(n);
    vector<long long> bv(n);

    for(int i = 0; i < n; i++) {
        cin >> av[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> bv[i];
    }

    vector<bool> a_succ_v(n);
    vector<bool> b_succ_v(n);

    a_succ_v[0] = true;
    b_succ_v[0] = true;

    for(int i = 1; i < n; i++) {
        if(a_succ_v[i - 1]) {
            if(abs(av[i - 1] - av[i]) <= k) {
                a_succ_v[i] = true;
            }
            if(abs(av[i - 1] - bv[i]) <= k) {
                b_succ_v[i] = true;
            }
        }
        if(b_succ_v[i - 1]) {
            if(abs(bv[i - 1] - av[i]) <= k) {
                a_succ_v[i] = true;
            }
            if(abs(bv[i - 1] - bv[i]) <= k) {
                b_succ_v[i] = true;
            }
        }
    }
    if(a_succ_v[n - 1] || b_succ_v[n - 1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
