// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    while(!(n & 1)) {
        cnt++;
        n = n >> 1;
    }
    cout << cnt << endl;

    return 0;
}
