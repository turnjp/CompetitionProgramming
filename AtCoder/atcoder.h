/* コピー＆ペースト用 */
#include <bits/stdc++.h>

using namespace std;

// 座標y,xが高さh幅wの範囲内か（開始座標(0,0)）
bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

// 8方向差分
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

// 4方向差分
const int dx4[8] = {0, 0, -1, 1};
const int dy4[8] = {-1, 1, 0, 0};

// 回転
// 添字0始まり
// [列][行] -> 左回転
// 小さい列ほど大きい行へ。大きい列ほど小さい行へ。行->列は大小そのまま。
// [行][列] -> 右回転
// 小さい行ほど大きい列へ。大きい行ほど小さい列へ。列->行は大小そのまま。
vector<vector<int>> rotate(vector<vector<int>> a) {
    int n = a.size();
    vector<vector<int>> rot(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            rot[j][(n - 1) - i] = a[i][j];
    return rot;
}

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