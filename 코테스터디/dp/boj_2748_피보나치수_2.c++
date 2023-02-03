#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

long long dp[91];
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << "\n";

    return 0;
}