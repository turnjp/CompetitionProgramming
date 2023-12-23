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

    vector<pair<long long, int>> xv;
    for(int i = 0; i < q; i++) {
        long long x;
        cin >> x;
        xv.push_back({x, i});
    }
    sort(xv.begin(), xv.end());

    vector<int> result_v(q);

    long long sum = 0;
    int j = 0;

    for(int i = 0; i < n; i++) {
        sum += rv[i];
        while(j < q) {
            if(sum > xv[j].first) {
                int idx = xv[j].second;
                result_v[idx] = i;
                j++;
            } else {
                break;
            }
        }
        if(j >= q) {
            break;
        }
    }
    while(j < q) {
        int idx = xv[j].second;
        result_v[idx] = n;
        j++;
    }

    for(int i = 0; i < q; i++) {
        cout << result_v[i] << endl;
    }

    return 0;
}
