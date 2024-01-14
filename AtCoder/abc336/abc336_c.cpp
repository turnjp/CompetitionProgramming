// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    long long n;
    cin >> n;

    string s;
    n -= 1;
    while(n > 0) {
        s += to_string(n % 5 * 2);
        n /= 5;
    }
    if(s.length() == 0) {
        s = "0";
    }

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
