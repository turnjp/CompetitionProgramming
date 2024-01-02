#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n, k, x;
    cin >> n >> k >> x;

    vector<long long> av(n);
    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        long long max_k = a / x; // aに対して何枚クーポンを使えるか（あれば）
        long long rem_a = a % x;
        if(k >= max_k) { // 最大数のクーポンを持っているか
            k -= max_k;
            av[i] = rem_a;
        } else if(k > 0) { // クーポンを持っているか
            k = 0;
            av[i] = a - k * x;
        } else {
            av[i] = a;
        }
    }

    long long sum = 0;
    sort(av.rbegin(), av.rend());
    for(int i = 0; i < n; i++) {
        if(k > 0) {
            av[i] = 0;
            k--;
        }
        sum += av[i];
    }

    cout << sum << endl;

    return 0;
}
