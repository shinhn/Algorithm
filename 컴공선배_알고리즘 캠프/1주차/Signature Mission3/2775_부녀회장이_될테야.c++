#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int people[15][15];
    for (int b = 1; b <= 14; b++)
    {
        people[0][b] = b;
    }

    for (int a = 1; a <= 14; a++)
    {
        for (int b = 1; b <= 14; b++)
        {
            int tmp = 0;
            for (int i = 1; i <= b; i++)
            {
                tmp += people[a - 1][i];
            }
            people[a][b] = tmp;
        }
    }

    int T;
    cin >> T;
    while(T--){
        int k, n;
        cin >> k >> n;
        cout << people[k][n] << "\n";
    }
    
    return 0;
}