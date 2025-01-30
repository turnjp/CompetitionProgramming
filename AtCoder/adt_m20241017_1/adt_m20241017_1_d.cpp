#include <bits/stdc++.h>

using namespace std;

// 座標y,xが高さh幅wの範囲内か（開始座標(0,0)）
bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> ss(h);
    for(string &s : ss) {
        cin >> s;
    }

    // 8方向差分
    const int dx8[8] = {0, 0, -1, 1, 1, 1, -1, -1};
    const int dy8[8] = {-1, 1, 0, 0, -1, 1, 1, -1};
    string str = "snuke";

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            for(int k = 0; k < 8; k++) {
                vector<pair<int, int>> ps;
                for(int i2 = 0; i2 < (int)str.length(); i2++) {
                    int y = i + dy8[k] * i2;
                    int x = j + dx8[k] * i2;
                    if(!in_mass(y, x, h, w) || ss[y][x] != str[i2]) {
                        break;
                    }
                    ps.push_back(make_pair(y, x));
                }
                if(ps.size() == str.length()) {
                    for(int i2 = 0; i2 < (int)ps.size(); i2++) {
                        cout << ps[i2].first + 1 << " " << ps[i2].second + 1
                             << endl;
                    }
                    return 0;
                }
            }
        }
    }

    return 0;
}
