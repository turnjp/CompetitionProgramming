#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;

    cin >> s;

    ll sum = 0;
    ll g_cnt = 0;
    ll now = 0;

    for (int i = 0; i < (int)s.length(); i++)
    {
        if (s[i] == '>')
        {
            now--;
            sum += now;
            g_cnt++;
            if (i == (int)s.length() || s[i] != s[i + 1])
            {
                if (now < 0)
                {
                    sum += (g_cnt + 1) * (-now);
                }
                else
                {
                    sum += g_cnt * (-now);
                }
                now = 0;
                g_cnt = 0;
            }
        }
        else if (s[i] == '<')
        {
            now++;
            sum += now;
        }
    }

    cout << sum << endl;

    return 0;
}
