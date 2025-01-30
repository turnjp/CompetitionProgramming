// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;

    for(int i = 0; i < (int)s.length() - 2; i++) {
        if(s[i] == '#' && s[i + 1] == '.' && s[i + 2] == '#') {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
