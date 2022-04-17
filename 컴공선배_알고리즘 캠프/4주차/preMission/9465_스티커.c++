#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int T, n;
int sticker[2][100000];
int memo[2][100000];

int main()
{
    cin >> T;
    while(T--){
        memset(sticker, 0, sizeof(sticker));
        memset(memo, 0, sizeof(memo));

        cin >> n;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> sticker[i][j];
            }
        }

        memo[0][0] = sticker[0][0];
        memo[0][1] = sticker[1][0] + sticker[0][1];
        memo[1][0] = sticker[1][0];
        memo[1][1] = sticker[0][0] + sticker[1][1];

        for (int j = 2; j < n; j++)
        {
            memo[0][j] = max(memo[1][j-1], memo[1][j-2]) + sticker[0][j];
            memo[1][j] = max(memo[0][j - 1], memo[0][j - 2]) + sticker[1][j];
        }

        cout << max(memo[0][n-1], memo[1][n-1]) << "\n";
    }
    
    return 0;
}