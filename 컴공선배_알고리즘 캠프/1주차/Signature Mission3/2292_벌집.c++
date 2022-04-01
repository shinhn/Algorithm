#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
1 (1)
2 ~ 7 (6)
8 ~ 19 (12)
20 ~ 37 (18)
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, layer = 0;
    cin >> N;

    if (N == 1)
    {
        cout << 1 << "\n";
        return 0;
    }

    while (1)
    {
        layer++;

        int max = 1;
        for (int j = 1; j <= layer; j++)
        {
            max += 6 * j;
        }
        if (N <= max)
            break;
    }

    cout << layer + 1 << "\n";

    return 0;
}