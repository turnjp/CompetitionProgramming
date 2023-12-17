#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define BOOL_VEC_TYPE vector<bool>

int main()
{
    int n, m;
    cin >> n >> m;
    vector<BOOL_VEC_TYPE> nb_vec(n, vector<bool>(n, false));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        nb_vec[u][v] = nb_vec[v][u] = true;
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nb_vec[i][j] && nb_vec[j][k] && nb_vec[k][i])
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
