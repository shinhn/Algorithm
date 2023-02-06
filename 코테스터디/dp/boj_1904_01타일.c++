#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
int dp[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dp[1] = 1;
    dp[2] = 2;

    for(int i=3;i<=N;i++){
        dp[i] = (dp[i-1] + dp[i-2])%15746;
    }

    cout << dp[N] << '\n';
    
    return 0;
}