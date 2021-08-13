#include <iostream>

using namespace std;

/*
1,2,3 의 합으로 만들 수 있는 경우의 수
1 - 1
2 - 2
3 - 4
4 - 7
4부터 dp[n] = dp[n-1] + dp[n-2] + dp[n-3]
*/


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,n;
    cin >> T;

    int dp[11];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i=4;i<11;i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    while(T>0)
    {
        T--;
        cin >> n;
        cout << dp[n] << '\n';
    }
}
