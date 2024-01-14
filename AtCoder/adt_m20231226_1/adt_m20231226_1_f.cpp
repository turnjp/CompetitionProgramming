// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    vector<long long> odd;
    vector<long long> even;

    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if(tmp % 2 == 1) {
            odd.push_back(tmp);
        } else {
            even.push_back(tmp);
        }
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    long long ans = -1;
    if(odd.size() >= 2 || even.size() >= 2) {
        if(odd.size() >= 2) {
            ans = odd[0] + odd[1];
        }
        if(even.size() >= 2) {
            long long tmp;
            tmp = even[0] + even[1];
            ans = max(ans, tmp);
        }
    }

    cout << ans << endl;
    return 0;
}
