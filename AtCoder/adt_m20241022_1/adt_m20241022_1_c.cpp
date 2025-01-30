#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ss(n);

    for(string &s : ss) {
        cin >> s;
    }

    string max_str = "";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
            const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};
            for(int k = 0; k < 8; k++) {
                string str = "";
                int x = i;
                int y = j;
                for(int l = 0; l < n; l++) {
                    str.push_back(ss[y][x]);

                    x += dx[k];
                    y += dy[k];
                    x = (x >= n) ? x - n : x;
                    x = (x < 0) ? n + x : x;
                    y = (y >= n) ? y - n : y;
                    y = (y < 0) ? n + y : y;
                }
                max_str = max(max_str, str);
            }
        }
    }
    cout << max_str << endl;

    return 0;
}
