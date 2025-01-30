#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;

    cin >> n >> c;

    int cnt = 0;
    int prev_sec = -c;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if(t - prev_sec >= c) {
            cnt++;
            prev_sec = t;
        }
    }
    cout << cnt << endl;

    return 0;
}
