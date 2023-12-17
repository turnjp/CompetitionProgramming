#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, int>
#define VECTOR_TYPE vector<int>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int h, w, h2, w2;
vector<VECTOR_TYPE> a, b;

bool rec_w(vector<int> vec_i, vector<int> vec_j)
{
    if (vec_j.size() >= w2)
    {
        for (int i = 0; i < h2; i++)
        {
            for (int j = 0; j < w2; j++)
            {
                if (a[vec_i[i]][vec_j[j]] != b[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
    else
    {
        int prev_j = (vec_j.size() > 0) ? vec_j[vec_j.size() - 1] : -1;
        for (int j = prev_j + 1; j < w; j++)
        {
            vec_j.push_back(j);
            if (rec_w(vec_i, vec_j))
            {
                return true;
            }
            vec_j.pop_back();
        }
    }

    return false;
}

bool rec_h(vector<int> vec_i)
{
    if (vec_i.size() >= h2)
    {
        vector<int> vec_j(0);
        return rec_w(vec_i, vec_j);
    }
    else
    {
        int prev_i = (vec_i.size() > 0) ? vec_i[vec_i.size() - 1] : -1;
        for (int i = prev_i + 1; i < h; i++)
        {
            vec_i.push_back(i);
            if (rec_h(vec_i))
            {
                return true;
            }
            vec_i.pop_back();
        }
    }

    return false;
}

int main()
{

    cin >> h >> w;

    a.resize(h);
    for (int i = 0; i < h; i++)
    {
        a[i].resize(w);
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> h2 >> w2;

    b.resize(h2);
    for (int i = 0; i < h2; i++)
    {
        b[i].resize(w2);
        for (int j = 0; j < w2; j++)
        {
            cin >> b[i][j];
        }
    }

    vector<int> vec_i(0);
    if (rec_h(vec_i))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
