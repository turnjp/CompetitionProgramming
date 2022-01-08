#include<iostream>
#include<sstream>
#include<regex>
#include<climits>
using namespace std;

int main(){
    long long k;

    cin >> k;

    ostringstream oss;

    oss << std::bitset<sizeof(long long)*CHAR_BIT>(k);

    string result = regex_replace(oss.str(),regex("1"),"2");
    result = regex_replace(result,regex("^0+"),"");
    result = (result == "")?"0":result;

    cout << result << endl;
}