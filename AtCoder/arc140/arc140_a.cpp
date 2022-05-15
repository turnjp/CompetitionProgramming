#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    int tmp_k;
    int a_cnt[26]; //アルファベットごとのカウンタ

    for (int offset = 1; offset <= n / 2; offset++)
    {
        if (n % offset != 0)
        {
            continue;
        }

        //各部分文字列のj番目を文字種類ごとにカウント
        tmp_k = k;
        for (int j = 0; j < offset && tmp_k >= 0; j++)
        {
            //アルファベットごとのカウンタ初期化
            for (int i = 0; i < 26; i++)
            {
                a_cnt[i] = 0;
            }
            // j2番目の部分文字列のj文字目をカウント
            for (int j2 = 0; j2 < n / offset; j2++)
            {
                a_cnt[s[j2 * offset + j] - 'a']++;
            }
            sort(a_cnt, a_cnt + 26);
            tmp_k -= (n / offset - a_cnt[25]);
        }
        if (tmp_k >= 0)
        {
            cout << offset << endl;
            return 0;
        }
    }
    cout << n << endl;

    return 0;
}
