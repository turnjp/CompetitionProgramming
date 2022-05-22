#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<pair<int, int>> as;

    for (int i = 0; i < n; i++)
    {
        int tmp;

        cin >> tmp;

        as.push_back({tmp, 0});
    }

    for (int i = 0; i < k; i++)
    {
        int tmp;

        cin >> tmp;

        as[tmp-1].second = 1;
    }

    sort(as.begin(), as.end(), greater<pair<int, int>>());

    if (as[0].second == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
