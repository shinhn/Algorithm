#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int gcd, lcm;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    int j = max(n1, n2);
    while (1)
    {
        if (j % n1 == 0 && j % n2 == 0)
        {
            lcm = j;
            break;
        }
        j++;
    }

    cout << gcd << '\n'
         << lcm;
}