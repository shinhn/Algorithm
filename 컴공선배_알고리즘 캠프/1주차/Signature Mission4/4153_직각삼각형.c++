#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;

    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        int M = max(a, max(b, c));

        if (M == a)
        {
            if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
        else if (M == b)
        {
            if (pow(b, 2) == (pow(a, 2) + pow(c, 2)))
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
        else
        {
            if (pow(c, 2) == (pow(b, 2) + pow(a, 2)))
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
    }
}