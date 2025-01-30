#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> am;
    int cnt = 0;
    for(int i = 1; i <= 2 * n; i++) {
        int a;
        cin >> a;
        if(am[a] == 0) {
            am[a] = i;
        } else {
            if(i - am[a] == 2) {
                cnt++;
                // cout << a << endl;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
