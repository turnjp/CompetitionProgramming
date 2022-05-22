#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<string> reels(n);
    vector<bool> done(n);

    for (int i = 0; i < n; i++)
    {
        cin >> reels[i];
    }

    int min_s = INT_MAX;
    for (int ch = '0'; ch <= '9'; ch++)
    {
        fill(done.begin(), done.end(), false);
        int s = 0;
        int doneNum = 0;
        while (true)
        {
            for (int j = 0; j < n; j++)
            {
                if (!done[j] && reels[j][s % 10] == ch)
                {
                    done[j] = true;
                    doneNum++;
                    break;
                }
            }
            if (doneNum>=n)
            {
                break;
            }
            
            s++;
        }

        if (min_s > s)
        {
            min_s = s;
        }
        
    }

    cout << min_s << endl;

    return 0;
}
