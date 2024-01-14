#include <bits/stdc++.h>

using namespace std;

// 座標y,xが高さh幅wの範囲内か（開始座標(0,0)）
bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

// 8方向差分
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

// k進法sを10進法へ変換
long long to_dec_sys(string s, long long k) {
    long long ans = 0;
    for(char x : s) {
        ans *= k;
        ans += x - '0';
    }
    return ans;
}

// 剰余（結果は常にプラス）
long long rem_p(long long a, long long b) { return (a % b + b) % b; }