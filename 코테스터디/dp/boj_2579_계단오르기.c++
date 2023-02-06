#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, dp[301];
int st[301];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> st[i];
    }

    dp[1] = st[1];
    dp[2] = st[1] + st[2];

    for(int i=3;i<=n;i++){
        dp[i] = max(dp[i-3] + st[i-1] + st[i], dp[i-2] + st[i]);
    }

    cout << dp[n] << '\n';
    
    return 0;
}