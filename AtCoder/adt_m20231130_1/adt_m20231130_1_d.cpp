#include <iostream>
#include <cmath>
#include <climits>
#include <utility>
#include <vector>
#include <algorithm>

#define PAIR_TYPE pair<int, long long>

using namespace std;

bool comp_pair_snd(const PAIR_TYPE &a, const PAIR_TYPE &b) { return a.second < b.second; }

int main()
{
    long double n;

    cin >> n;

    cout << floor(log2(n)) << endl;

    return 0;
}
