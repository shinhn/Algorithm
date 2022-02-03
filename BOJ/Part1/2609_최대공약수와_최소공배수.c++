#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n1, n2;
    cin >> n1 >> n2;

    int gcd = 1, lcm = max(n1, n2);

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    for (int i = max(n1, n2);; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << gcd << '\n'
         << lcm;
}