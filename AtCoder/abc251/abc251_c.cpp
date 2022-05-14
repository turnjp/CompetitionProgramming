#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;

    cin >> n;

    string s;
    int t;

    set<string> os;
    int max = -1;
    int max_number;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        if(os.find(s) == os.end()){
            if (t>max)
            {
                max = t;
                max_number = i+1;
            }
            os.insert(s);
        }
    }

    cout << max_number << endl;
}
