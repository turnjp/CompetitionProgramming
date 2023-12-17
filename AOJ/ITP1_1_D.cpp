#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int in_s;

    cin >> in_s;

    cout << in_s / 3600 << ":" << ((in_s % 3600) / 60) << ":" << (in_s % 60) << endl;

    return 0;
}