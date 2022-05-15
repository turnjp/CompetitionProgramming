#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    int result = n;
    int tmp_k;
    int substr_num;
    vector<int> a_cnt(26); //アルファベットごとのカウンタ

    for (int offset = 1; offset <= n / 2; offset++)
    {
        if (n % offset != 0)
        {
            continue;
        }

        //各部分文字列のj番目を文字種類ごとにカウント
        tmp_k = k;
        substr_num = n/offset;
        for (int j = 0; j < offset && tmp_k >= 0; j++)
        {
            //アルファベットカウンタ初期化
            fill(a_cnt.begin(),a_cnt.end(),0);

            // j2番目の部分文字列のj文字目をカウント
            for (int j2 = 0; j2 < substr_num; j2++)
            {
                a_cnt[s[j2 * offset + j] - 'a']++;
            }
            sort(a_cnt.begin(),a_cnt.end(),greater<int>());
            tmp_k -= (substr_num - a_cnt[0]);
        }
        if (tmp_k >= 0)
        {
            result = offset;
            break;
        }
    }

    cout << result << endl;

    return 0;
}
