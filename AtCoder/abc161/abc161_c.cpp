#include <iostream>
using namespace std;

int main()
{
    long long n,k;

    cin >> n >> k;

    cout << min(n%k,abs(n%k-k)) << endl;
}
