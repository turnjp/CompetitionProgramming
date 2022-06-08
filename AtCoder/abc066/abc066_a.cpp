#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;

    cin >> s;

    string s1, s2;
    for (int i = s.length() / 2 - 1; i > 0; i--)
    {
        s1 = s.substr(0, i);
        s2 = s.substr(i, i);
        if (s1 == s2)
        {
            cout << s1.length() * 2 << endl;

            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}
