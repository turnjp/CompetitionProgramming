#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> as(n);
    long long sum = 0;
    for(long long &a : as) {
        cin >> a;
        sum += a;
    }

    sort(as.begin(), as.end());

    vector<long long> bs(n, sum / n);
    long long rem = sum % n;
    for(int i = 0; i < n; i++) {
        if(i < rem) {
            bs[n - 1 - i] = sum / n + 1;
        }
    }

    long long cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += abs(as[i] - bs[i]);
    }

    cout << cnt / 2 << endl;

    return 0;
}
