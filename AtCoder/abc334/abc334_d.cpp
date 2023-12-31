#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> rv(n);
    for(int i = 0; i < n; i++) {
        cin >> rv[i];
    }
    sort(rv.begin(), rv.end());

    vector<long long> sv(n + 1);

    // sv[i]はi-1までの累積和
    sv[0] = 0;
    for(int i = 1; i < n + 1; i++) {
        sv[i] = sv[i - 1] + rv[i - 1];
    }

    for(int i = 0; i < q; i++) {
        long long x;
        cin >> x;

        int result;
        // upper_boundで、必要トナカイ数が要求xを上回るソリ数が分かる。そこから１引くと運べるソリ数になる。
        result = upper_bound(sv.begin(), sv.end(), x) - sv.begin() - 1;
        cout << result << endl;
    }

    return 0;
}
