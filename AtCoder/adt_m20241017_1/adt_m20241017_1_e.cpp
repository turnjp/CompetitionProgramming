#include <bits/stdc++.h>

using namespace std;

// 座標y,xが高さh幅wの範囲内か（開始座標(0,0)）
bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

int main() {
    int n, q;
    cin >> n >> q;

    map<int, map<int, bool>> fmm;

    for(int i = 0; i < q; i++) {
        int t, a, b;
        cin >> t >> a >> b;
        switch(t) {
        case 1:
            fmm[a][b] = true;
            break;
        case 2:
            fmm[a][b] = false;
            break;
        case 3:
            if(fmm[a][b] && fmm[b][a]) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}
