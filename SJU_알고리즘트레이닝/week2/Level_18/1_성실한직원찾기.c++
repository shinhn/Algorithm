#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int sum[65535 + 1];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int MAP[3][4] = {
        {65000, 35, 42, 70},
        {70, 35, 65000, 1300},
        {65000, 30000, 38, 42}
    };
    
    int max = -1; // 최댓값
    int ans = 0; // 실제값

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[MAP[i][j]]++;
            if (sum[MAP[i][j]] > max){ // 갯수를 세면서 최댓값 갱신
                max = sum[MAP[i][j]];
                ans = MAP[i][j];
            }
        }
    }
    
    cout << ans << "\n";
    
    
    return 0;
}