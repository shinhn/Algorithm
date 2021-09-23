#include <iostream>

using namespace std;

/*
3이나 2로 나누어 떨어질 때까지 -1을 해준뒤 1이 될때까지 3이나 2로 나누는 방법
-> 틀린 답 (케이스마다 다름)
예를 들어 17의 경우 17 -> 16 -> 15 -> 5 -> 3 -> 1 중간에 -1 연산을 또 사용해야 함

int div_3(int n)
{
    return n / 3;
}

int div_2(int n)
{
    return n / 2;
}

int min_1(int n)
{
    return n - 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cnt=0;
    cin >> N;

    while(N%3!=0 && N%2!=0)
    {
        N = min_1(N);
        cnt++;
    }

    if(N%3==0)
    {
        while(N!=1)
        {
            N = div_3(N);
            cnt++;
        }
    }
    else if(N%2==0)
    {
        while(N!=1)
        {
            N = div_2(N);
            cnt++;
        }
    }

    cout << cnt;
}
*/

/* 
다이나믹 프로그래밍 (DP)

큰 문제를 한 번에 해결하기 힘들 때 작은 여러 개의 문제로 나누어서 푸는 기법인데,
작은 문제들을 풀다보면 같은 문제들을 반복해서 푸는 경우가 생긴다.
그 문제들을 매번 재계산하지 않고 값을 저장해두었다가 재사용하는 기법이다.
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int dp[1000001] = {
        0,
        0,
        1,
        1,
        2,
    };

    for(int i=5;i<=N;i++)
    {
        // dp[N] = min(dp[N-1]+1, dp[N/2]+1, dp[N/3]+1)
        dp[i] = dp[i-1] + 1;
        if(i%2==0) dp[i] = min(dp[i/2]+1,dp[i]);
        if(i%3==0) dp[i] = min(dp[i/3]+1,dp[i]);
    }

    cout << dp[N];
}
