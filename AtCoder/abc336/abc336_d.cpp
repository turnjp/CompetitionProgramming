// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &ta : a)
        cin >> ta;

    int lc = 1;
    int rc = 1;
    int li = 0;
    int ri = n - 1;
    int ans = 1;
    bool lf = false;
    while(li < ri) {
        if(lc > a[li]) {
            lc = a[li];
        }

        if(rc > a[ri]) {
            rc = a[ri];
        }

        if(rc < lc) {
            ans = max(ans, (rc + 1) / 2);
            rc++;
            ri--;
            lf = false;
        } else {
            ans = max(ans, (lc + 1) / 2);
            lc++;
            li++;
            lf = true;
        }
    }
    if(lf) {
        lc--;
    } else {
        rc--;
    }
    int tmp;
    if(lc < rc) {
        tmp = lc + 1;
    } else if(lc > rc) {
        tmp = rc + 1;
    } else {
        tmp = lc;
    }

    ans = max(ans, tmp);

    cout << ans << endl;

    return 0;
}
