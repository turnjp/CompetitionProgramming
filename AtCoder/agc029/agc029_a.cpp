#include <bits/stdc++.h>
using namespace std;

#define LLint long long

int main()
{
    string s;

    cin >> s;

    LLint cnt = 0;
    int cnt_b = 0;

    for (int i = 0; i < (int)s.length(); i++)
    {
        if (s[i] == 'B')
        {
            cnt_b++;
        }
        else if (s[i] == 'W')
        {
            cnt += cnt_b;
        }
    }

    cout << cnt << endl;

    return 0;
}
