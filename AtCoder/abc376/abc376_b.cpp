#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    int l = 0;
    int r = 1;
    int cnt = 0;
    for(int i = 0; i < q; i++) {
        char h;
        int t;
        cin >> h >> t;
        t--;

        int j;
        int x;
        int st;
        if(h == 'L') {
            st = l;
            j = l;
            x = r;
            l = t;
        } else {
            st = r;
            j = r;
            x = l;
            r = t;
        }

        int tc = 0;
        for(; j != t; tc++) {
            if(x == j) {
                break;
            }
            j++;
            if(j == n) {
                j = 0;
            }
        }
        if(j != t) {
            tc = 0;
            for(j = st; j != t; tc++) {
                if(x == j) {
                    break;
                }
                j--;
                if(j == -1) {
                    j = n - 1;
                }
            }
        }

        cnt += tc;
        // cout << cnt << endl;
    }
    cout << cnt << endl;

    return 0;
}
