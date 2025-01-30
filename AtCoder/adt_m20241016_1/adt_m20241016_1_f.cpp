#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;

    cin >> n;
    long long cnt = 0;
    for(int i = 1; i <= 9; i++) {
        int curr_cnt = 1;
        int curr_min = i;
        int curr_max = i;
        for(long long j = 2; j <= n; j++) {
            curr_cnt *= 3;
            if(curr_min <= 1) {
                curr_cnt--;
            }
            if(curr_max >= 9) {
                curr_cnt--;
            }
            curr_min = (curr_min <= 1) ? 1 : curr_min - 1;
            curr_max = (curr_max >= 9) ? 9 : curr_max + 1;
        }
        cout << curr_cnt << endl;
        cnt += curr_cnt;
    }

    cout << cnt << endl;

    return 0;
}
