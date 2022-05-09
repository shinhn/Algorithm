#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M;
int map[1001][1001];
int dp[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> map[i][j];
        }
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            dp[i][j] += map[i][j];
        }
    }

    cout << dp[N][M] << "\n";

    return 0;
}