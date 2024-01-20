// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    char p, q;
    cin >> p >> q;
    p -= 'A';
    q -= 'A';

    vector<int> n = {3, 1, 4, 1, 5, 9};

    if(p > q) {
        swap(p, q);
    }

    int ans = 0;
    for(int i = p; i < q; i++) {
        ans += n[i];
    }

    cout << ans << endl;

    return 0;
}
