// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

// 座標y,xが高さh幅wの範囲内か（開始座標(0,0)）
bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

int main() {
    int h, w, k;
    cin >> h >> w >> k;

    vector<string> mass(h);
    for(auto &s : mass) {
        cin >> s;
    }

    int min_n = max(h, w) + 1;
    for(int i = 0; i < h; i++) {
        int cnt_circle = 0;
        int cnt_n = 0;
        int x_j = -1;
        for(int j = 0; j < w; j++) {
            // 現在位置からKの幅だけ見る（範囲外は外す）
            if(in_mass(i, j - k, h, w) && x_j < j - k) {
                if(mass[i][j - k] == 'o') {
                    cnt_circle--;
                }
                if(mass[i][j - k] == '.') {
                    cnt_circle--;
                    cnt_n--;
                }
            }

            switch(mass[i][j]) {
            case 'x':
                cnt_n = 0;
                cnt_circle = 0;
                x_j = j;
                break;
            case 'o':
                cnt_circle++;
                break;
            case '.':
                cnt_circle++;
                cnt_n++;
                break;
            default:
                break;
            }

            if(cnt_circle >= k) {
                min_n = min(min_n, cnt_n);
            }
        }
    }

    for(int i = 0; i < w; i++) {
        int cnt_circle = 0;
        int cnt_n = 0;
        int x_j = -1;
        for(int j = 0; j < h; j++) {
            // 現在位置からKの幅だけ見る（範囲外は外す）
            if(in_mass(j - k, i, h, w) && x_j < j - k) {
                if(mass[j - k][i] == 'o') {
                    cnt_circle--;
                }
                if(mass[j - k][i] == '.') {
                    cnt_circle--;
                    cnt_n--;
                }
            }

            switch(mass[j][i]) {
            case 'x':
                cnt_n = 0;
                cnt_circle = 0;
                x_j = j;
                break;
            case 'o':
                cnt_circle++;
                break;
            case '.':
                cnt_circle++;
                cnt_n++;
                break;
            default:
                break;
            }

            if(cnt_circle >= k) {
                min_n = min(min_n, cnt_n);
            }
        }
    }

    if(min_n != max(h, w) + 1) {
        cout << min_n << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
