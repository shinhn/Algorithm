#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout.precision(20);
    cout << fixed;
    cout << (double)a / b << "\n";

    return 0;
}