// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    string s, t;
    cin >> s >> t;

    if(s == t) {
        cout << 0 << endl;
    } else {
        int n = min(s.length(), t.length());
        int i;
        for(i = 0; i < n; i++) {
            if(s[i] != t[i]) {
                break;
            }
        }
        cout << i + 1 << endl;
    }

    return 0;
}
