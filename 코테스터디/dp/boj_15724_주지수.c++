#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

/*
그때 그때 인구수를 구하면 100000 * (1024 * 1024) 시간 초과가 날 것
-> dp 이용
*/

int N, M, K;
int map[1025][1025];
int dp[1025][1025];

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
            dp[i][j] = dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1] + map[i][j];
        }
    }

    cin >> K;
    for(int i=0;i<K;i++){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        cout << dp[y2][x2] - dp[y2][x1-1] - dp[y1-1][x2] + dp[y1-1][x1-1] << "\n";
    }

    return 0;
}