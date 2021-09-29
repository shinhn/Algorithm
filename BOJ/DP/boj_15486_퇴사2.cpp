#include <iostream>
#include <vector>

using namespace std;

/*
N의 범위가 150만 이므로 일반적인 완전탐색으로는 시간내에 통과할 수 없을듯
-> dp 이용해보기

퇴사일(N)까지 벌 수 있는 최대 액수를 구해야 함
dp[i] : (i-1)일까지 벌 수 있는 최대 액수

퇴사일이 N이라면 답은 dp[N+1]

이해가 안된다ㅏㅏ
*/

#define Max 1500001

int N;
int dp[Max];
int T[Max], P[Max]; // T:걸리는 시간, P:금액

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> T[i] >> P[i];
    }

    for (int i = 1; i <= N; i++)
    {
        dp[i + T[i]] = max(dp[i + T[i]], dp[i] + P[i]);

        dp[i + 1] = max(dp[i + 1], dp[i]);
    }

    cout << dp[N + 1] << '\n';

    return 0;
}