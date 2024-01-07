#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n;
    cin >> n;

    string abstr = "";

    while(n > 0) {
        if(n % 2 == 1) {
            abstr.push_back('A');
            n -= 1;
        } else {
            abstr.push_back('B');
            n /= 2;
        }
    }
    reverse(abstr.begin(), abstr.end());

    cout << abstr << endl;
    return 0;
}
