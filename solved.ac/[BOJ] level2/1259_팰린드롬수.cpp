#include <iostream>
#include <string>
using namespace std;

int main()
{

    string n;

    while (1)
    {
        cin >> n;
        if (n == "0")
            break;

        string ans = "yes";

        for (int i = 0; i < n.length() / 2; i++)
        {
            if (n[i] != n[n.length() - 1 - i])
            {
                ans = "no";
                break;
            }
        }
        cout << ans << '\n';
    }
}