#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, long long>

using namespace std;

bool fcomp(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int main()
{
    int n;
    vector<PAIR_TYPE> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(make_pair(i, tmp));
    }

    // 降順ソート
    sort(v.rbegin(), v.rend(), fcomp);

    vector<PAIR_TYPE> result_v;

    long long save = v[0].second;
    long long sum = 0;
    int last_save_add = v[0].second;

    result_v.push_back(make_pair(v[0].first, sum));

    for (int i = 1; i < n; i++)
    {
        if (last_save_add > v[i].second) // 前回の保留値は現在値より大きい
        {
            sum += save;        // 保留値（現在値より大きな値の合計）を加算
            save = v[i].second; // 現在値を保留値初期値とする
            last_save_add = v[i].second;
        }
        else if (last_save_add == v[i].second) // 前回の保留値と現在値が同じ（sumへ加算なし）
        {
            save += v[i].second; // 現在値を保留値へ加算
        }

        result_v.push_back(make_pair(v[i].first, sum));
    }

    sort(result_v.begin(), result_v.end());

    for (int i = 0; i < n; i++)
    {
        cout << result_v[i].second;

        if (i < n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
