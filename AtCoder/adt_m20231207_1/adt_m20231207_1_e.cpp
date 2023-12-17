#include <bits/stdc++.h>

#define PAIR_TYPE pair<int, int>
#define VECTOR_TYPE vector<int>

using namespace std;

// bool in_mass(int x, int y, int h, int w) { return x >= 0 && y >= 0 && x < w && y < h; }
// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main()
{
    int n, m;

    cin >> n >> m;
    vector<vector<int>> graph(n);

    if (n - m != 1)
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;

        cin >> u >> v;
        u--;
        v--;

        graph[v].push_back(u);
        graph[u].push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        if (graph[i].size() > 2)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> reach(n, false);
    queue<int> que;

    // 0 start
    reach[0] = true;
    que.push(0);

    /* 一つの頂点から全ての頂点が辿れるか */
    // 頂点0から辿れる頂点全てに到達済みフラグを立てる
    while (!que.empty())
    {
        // キューから次の頂点を取り出す
        int u = que.front();
        que.pop();

        // その頂点から接続先の頂点群を探索
        for (const int v : graph[u])
        {
            // 未到達の頂点なら到達済みフラグを立てキューに加える。
            if (!reach[v])
            {
                reach[v] = true;
                que.push(v);
            }
        }
    }

    // 未到達の頂点が存在しないか
    for (int i = 0; i < n; i++)
    {
        if (!reach[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
