// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    char p, q;
    cin >> p >> q;

    map<char, int> n_map;

    n_map['B'] = 3;
    n_map['C'] = 1;
    n_map['D'] = 4;
    n_map['E'] = 1;
    n_map['F'] = 5;
    n_map['G'] = 9;

    if(p > q) {
        swap(p, q);
    }

    int ans = 0;
    for(char key = p + 1; key <= q; key++) {
        ans += n_map[key];
    }

    cout << ans << endl;

    return 0;
}
