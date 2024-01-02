#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long k;
    cin >> k;

    bitset<64> bs(k);
    string s = bs.to_string();
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') {
            s[i] = '2';
        }
    }

    while(s[0] == '0') {
        s.erase(0, 1);
    }

    if(s.length() == 0) {
        s = "0";
    }

    cout << s << endl;

    return 0;
}
