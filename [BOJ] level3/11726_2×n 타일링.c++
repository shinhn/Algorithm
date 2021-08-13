#include <iostream>

using namespace std;
/*
2*1 -> 1    ㅡ
2*2 -> 2    ||, =
2*3 ->      2*1에 같은 방향으로 두개 깔거나, 2*2에 반대 방향으로 하나 더 깔면됨 => dp문제

2*9 -> 55
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int dp[1001];
    dp[1] = 1;
    dp[2] = 2;

    int n;
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] = dp[i] % 10007;
    }

    cout << dp[n];
}