#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int의 byte : " << sizeof n_int << endl;
    cout << "max of int_byte : " << n_int << endl;

    cout << "short의 byte : " << sizeof n_short << endl;
    cout << "max of short_byte : " << n_short << endl;

    cout << "long의 byte : " << sizeof n_long << endl;
    cout << "max of long_byte : " << n_long << endl;

    cout << "long long의 byte : " << sizeof n_llong << endl;
    cout << "max of long long_byte : " << n_llong << endl;
    
}