#include <iostream>
#include <map>
using namespace std;

/* ---------------------- ここから ---------------------- */
// #include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
// 任意長整数型
using Bint = mp::cpp_int;
// 仮数部が10進数で1024桁の浮動小数点数型(TLEしたら小さくする)
// using Real = mp::number<mp::cpp_dec_float<1024>>;
/* ---------------------- ここまで ---------------------- */

Bint f(int n)
{
    static map<int, Bint> done_map;

    Bint result = 1;

    for (int i = n; i > 1; i--)
    {
        if (done_map.count(i) == 1)
        {
            result *= done_map[i];
            break;
        }
        result *= i;
    }
    done_map[n] = result;

    return result;
}

int main()
{
    int n;

    cin >> n;

    map<int, int> a_map;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (a_map.count(tmp) == 0)
        {
            a_map[tmp] = 1;
        }
        else
        {
            a_map[tmp] += 1;
        }
    }

    Bint result = 0;

    for (pair<int, int> a : a_map)
    {
        int tmp = a.second;
        Bint tmp3;

        if (tmp >= 2)
        {
            tmp3 = f(tmp);
        }
        if (tmp >= 3)
        {
            result -= tmp3 / (6 * f(tmp - 3));
        }
        if (tmp >= 2 && n - tmp >= 1)
        {
            Bint tmp2 = f((n - tmp) - 1);
            result -= (tmp3 / (2 * f(tmp - 2))) * (f(n - tmp) / tmp2);
        }
    }

    result += f(n) / (6 * f(n - 3));

    cout << result << endl;

    return 0;
}
