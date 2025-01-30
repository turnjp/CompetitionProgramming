#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 8;

    vector<string> ss(n);
    for(string &s : ss) {
        cin >> s;
    }

    vector<bool> x_flags(n, true);
    vector<bool> y_flags(n, true);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(ss[i][j] == '#') {
                y_flags[i] = false;
                x_flags[j] = false;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(x_flags[i] && y_flags[j]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
