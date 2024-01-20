// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    double a, b;
    cin >> a >> b;

    if(a != 0) {
        double x = sqrt((1 / (1 + (b * b) / (a * a))));
        double y = b / a * x;

        cout << fixed << setprecision(15) << x << " " << y << endl;
    } else if(b > 0) {
        cout << fixed << setprecision(15) << 0.0 << " " << 1.0 << endl;
    } else if(b < 0) {
        cout << fixed << setprecision(15) << 0.0 << " " << -1.0 << endl;
    } else {
        cout << fixed << setprecision(15) << 0.0 << " " << 0.0 << endl;
    }
    return 0;
}
