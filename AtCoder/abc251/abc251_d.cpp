#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int w;

    cin >> w;

    vector<int> av;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            int tmp = j * pow(100, i);
            av.push_back(tmp);
        }
    }

    cout << av.size() << endl;
    for (auto a : av)
    {
        cout << a;
        if (a == 990000)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }
}
