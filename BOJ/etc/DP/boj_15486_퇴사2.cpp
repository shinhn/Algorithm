#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
[백준 15486 c++ V] 퇴사 2
문제: 퇴사 문제와 같지만 n이 150만 까지여서 완탐 불가능
접근: 완전탐색 재귀-> 1.i날 일한 경우 2. 안한 경우 -> 시간복잡도O(2^n) = 2^150만 시간초과 예상 
접근2: dp 1차원->
dp점화식 ,
dp[i] =  i번째 날 상담 하기 전까지 최대 이익.
바텀업 방식으로 
1.i번째날 상담 안 한 경우 dp[i+1] =  max(dp[i + 1], dp[i])
2.i번째날 상담 한 경우 dp[i+t[i]] = max(원래 i+t[i] 날 최대금액과 , i번째 날 일을 한 금액 )
시간복잡도: O(n) = 150만 

풀이:
1.시간, 금액배열 입력
2.dp 
    1)i번째날 상담 안 한 경우 dp[i+1] =  max(dp[i + 1], dp[i])
    -> (i+1)일에 상담을 해야 돈을 더 받는지 안받는 지(dp[i + 1])는 그전에 상담 금액 최댓값(dp[i])이랑 비교해야 함
    2)i번째날 상담 한 경우 dp[i+t[i]] = max(원래 i+t[i] 날 최대금액과 , i번째 날 일을 한 금액 )
3.n+1 날 수업 전까지 최대금액 출력
*/
#define MAX 1500000 + 2
int n;
int t[MAX], p[MAX];
long long dp[MAX];

int main()
{
    ios::sync_with_stdio(false); // 계산시간 단축 // cin,scanf 같이 쓰면 오류
    cin.tie(nullptr);
    cout.tie(nullptr); // 입출력 시간 단축 // 이것을 쓰면 scanf,printf섞어 쓰면 안됨

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> p[i];
    }
    // 바텀업 dp
    dp[1] = 0; // 첫째날은 번 금액 없음
    for (int i = 1; i <= n; i++)
    {
        if (i + t[i] <= n + 1)
        {
            dp[i + t[i]] = max(dp[i + t[i]], dp[i] + p[i]);
        } // i날 일을 한 경우
        if (i + 1 <= n + 1)
        {
            dp[i + 1] = max(dp[i + 1], dp[i]);
        } // i날 일을 안 한 경우
    }
    cout << dp[n + 1] << '\n'; // n+1 수업 전까지를 포함해야 n날 수업 까지 포함
    return 0;
}