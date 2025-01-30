#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> ss(h);

    for(string &s : ss) {
        cin >> s;
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w - 1; j++) {
            if(ss[i][j] == 'T' && ss[i][j + 1] == 'T') {
                ss[i][j] = 'P';
                ss[i][j + 1] = 'C';
            }
        }
    }

    for(string s : ss) {
        cout << s << endl;
    }

    return 0;
}
