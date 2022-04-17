#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int memo[1001][1001]; // memo[N][K]
int N, K;

int dp(int N, int K)
{
    if (memo[N][K] != 0) // 이미 구한 값이면 저장해놓은 값 꺼내서 리턴 (메모이제이션)
        return memo[N][K];

    if (N == K || K == 0) memo[N][K] = 1;
    else memo[N][K] = (dp(N-1,K-1) + dp(N-1,K)) % 10007;

    return memo[N][K];
}

int main()
{   
    cin >> N >> K;
    
    dp(N, K);
    
    cout << memo[N][K] << "\n";

    return 0;
}