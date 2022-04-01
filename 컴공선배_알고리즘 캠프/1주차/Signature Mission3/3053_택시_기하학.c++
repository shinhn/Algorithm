#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double r;
    cin >> r;
    
    cout.precision(6);
    cout << fixed;

    // 유클리드 기하학
    cout << pow(r, 2) * M_PI << '\n';

    // 택시 기하학
    cout << 2 * pow(r, 2);

    return 0;
}