#include <iostream>
using namespace std;

int main()
{
    int n, l, r;

    cin >> n >> l >> r;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp <= l)
        {
            cout << l;
        }
        else if (tmp >= r)
        {
            cout << r;
        }
        else
        {
            cout << tmp;
        }

        if (i < n - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}
