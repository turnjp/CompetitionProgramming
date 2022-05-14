#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n, w;

    cin >> n >> w;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    set<int> a_set;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > w)
        {
            break;
        }
        a_set.insert(a[i]);

        for (int j = i+1; j < n; j++)
        {
            if (a[i] + a[j] > w)
            {
                break;
            }
            a_set.insert(a[i] + a[j]);

            for (int k = j+1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] > w)
                {
                    break;
                }
                a_set.insert(a[i] + a[j] + a[k]);
            }
        }
    }

    cout << a_set.size() << endl;
}
