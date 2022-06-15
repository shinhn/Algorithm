#include <iostream>
using namespace std;

int n,a,b,c,d;

int main(){
    cin >> n;

    d = n%10;
    n /= 10;
    c = n%10;
    n /= 10;
    b = n%10;
    n /= 10;
    a = n;

    cout << "숫자" << a << "\n";
    cout << "숫자" << b << "\n";
    cout << "숫자" << c << "\n";
    cout << "숫자" << d << "\n";

    return 0;
}