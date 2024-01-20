// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    int sum_x = 0;
    int sum_y = 0;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        sum_x += x;
        sum_y += y;
    }

    string s;
    if(sum_x > sum_y) {
        s = "Takahashi";
    } else if(sum_x < sum_y) {
        s = "Aoki";
    } else {
        s = "Draw";
    }

    cout << s << endl;

    return 0;
}
