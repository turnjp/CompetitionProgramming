#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool mistake_easy(int h, int m) {
    int a, b, c, d;
    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;

    int mh, mm;
    mh = a * 10 + c;
    mm = b * 10 + d;

    return 0 <= mh && mh <= 23 && 0 <= mm && mm <= 59;
}

int main() {
    string n;
    cin >> n;

    sort(n.begin(), n.end());

    long long max_pd = -1;
    do {
        for(int i = 1; i < n.length(); i++) {
            string sub1 = n.substr(0, i);
            string sub2 = n.substr(i, n.length() - i);
            if(sub1[0] == 0 || sub2[0] == 0) {
                continue;
            }
            max_pd = max(max_pd, stoll(sub1) * stoll(sub2));
        }
    } while(next_permutation(n.begin(), n.end()));

    cout << max_pd << endl;

    return 0;
}
