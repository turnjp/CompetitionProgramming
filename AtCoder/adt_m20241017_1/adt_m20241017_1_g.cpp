#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> zs(n, make_pair(0, 0));

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x, y, z;

        cin >> x >> y >> z;
        zs[i].first = (y - x) / 2 + 1;
        zs[i].first = (zs[i].first < 0) ? 0 : zs[i].first;
        zs[i].second = z;
        sum += z;
    }

    int need = sum / 2 + 1;
    // あとは、必要寝返り数に対して獲得議席が多い（a）順に並び替える
    // ただし、aは比較関数内で計算する。なぜなら分母の必要寝返り数は残りの必要議席数によって変わるため
    // そのため、並び替えは区を一つ計算するごとに実施する

    return 0;
}
