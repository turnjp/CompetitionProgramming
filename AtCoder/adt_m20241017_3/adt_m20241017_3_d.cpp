#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;

    cin >> s >> t;
    int a = abs((s[0] - 'A') - (s[1] - 'A'));
    a = (a >= 3) ? 5 - a : a;
    int b = abs((t[0] - 'A') - (t[1] - 'A'));
    b = (b >= 3) ? 5 - b : b;

    if(a == b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
