#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, i, num = 0, a, b; // a: 분자, b: 분모
    cin >> X;

    for (i = 1;; i++)
    {
        num += i;
        if (X <= num)
            break;
    }

    if (i % 2 == 0)
    {
        a = 1;
        b = i;
        for (int j = 0; j < X - (num - (i - 1)); j++)
        {
            a++;
            b--;
        }
    }
    else
    {
        a = i;
        b = 1;
        for (int j = 0; j < X - (num - (i - 1)); j++)
        {
            a--;
            b++;
        }
    }

    cout << a << "/" << b << "\n";

    return 0;
}