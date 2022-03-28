#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;

    if ((a % 4 == 0) && (a % 100 != 0 || a % 400 == 0))
        cout << "1";
    else
        cout << "0";

    return 0;
}