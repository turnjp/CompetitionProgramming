#include <iostream>
using namespace std;

int main()
{
    int n, l;
    int cnt = 0;

    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp >= l)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
