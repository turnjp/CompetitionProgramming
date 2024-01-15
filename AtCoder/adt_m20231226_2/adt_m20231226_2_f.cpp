// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &t : a) {
        cin >> t;
    }

    vector<int> a_uni(a);
    sort(a_uni.begin(), a_uni.end());
    a_uni.erase(unique(a_uni.begin(), a_uni.end()), a_uni.end());

    vector<int> cnt(n, 0);
    for(auto &t : a) {
        cnt[a_uni.end() - upper_bound(a_uni.begin(), a_uni.end(), t)]++;
    }

    for(int i = 0; i < n; i++) {
        cout << cnt[i] << endl;
    }

    return 0;
}
