// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    double x_prev, y_prev;
    double x, y;

    cin >> n;
    x_prev = y_prev = 0;
    double sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        sum += sqrt(pow(x_prev - x, 2) + pow(y_prev - y, 2));
        x_prev = x;
        y_prev = y;
    }
    x = y = 0;
    sum += sqrt(pow(x_prev - x, 2) + pow(y_prev - y, 2));

    cout << setprecision(15) << sum << endl;

    return 0;
}
