#include <iostream>

using namespace std;

int gcd(int n1, int n2)
{
    if (n2 == 0)
        return n1;
    else
        return gcd(n2, n1 % n2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n1, n2;

    cin >> T;

    while (T--)
    {
        cin >> n1 >> n2;

        cout << n1 * n2 / gcd(n1, n2) << '\n';
    }
}