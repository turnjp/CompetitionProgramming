// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    int m = n / 2 + n % 2;
    cout << m << endl;

    for(int i = 1; i <= m; i++) {
        // 本数出力
        int limit;
        if(i + m - 1 <= n) {
            cout << m << " "; // m本
            limit = i + m - 1;
        } else {
            cout << m - (i + m - 1 - n) << " ";
            limit = n;
        }

        //
        for(int j = i; j <= limit; j++) {
            cout << j << ((j <= limit - 1) ? " " : "\n");
        }
    }

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '1') {}
    }

    return 0;
}
