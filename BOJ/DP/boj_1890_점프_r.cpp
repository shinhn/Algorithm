#include <iostream>
#include <vector>

using namespace std;

/*
<문제>
현재 칸에 적혀있는 수만큼 오른쪽이나 아래쪽으로만 이동
가장 왼쪽 위 칸에서 가장 오른쪽 아래 칸으로 규칙에 맞게 이동할 수 있는 경로의 개수를 구하라

<접근>
1. 재귀 완전탐색 -> O(2^100) -> ..시간복잡도 너무 큼
2. dp에 해당 위치까지 경로의 수 저장하며 완전탐색 -> O(100*100)

<error>
(1)
점프할때 이동 경로의 수를 단순히 1 더해주는 것이 아니라
이동전 칸까지의 경로의 수를 포함해야됨

(2)
dp를 int로 선언하니 틀린답으로 채점되었었음
경로의 개수는 263-1보다 작거나 같다고 했으므로 long long으로 선언해야함

2^63 − 1 = 9,223,372,036,854,775,807
long long 범위 : –9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

*/

#define Max 101

int N;
int map[Max][Max];
int dp[Max][Max];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];
        }
    }

    dp[0][0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int jump = map[i][j];
            if (i != N - 1 && i + jump < N) // 아래로, map을 벗어나지 않을 경우
            {
                dp[i + jump][j] += dp[i][j]; // (i,j)까지의 경로의 수가 n일 경우 (i+jump, j)까지의 경로의 수도 기본적으로 n번만큼은 가지고 가야 함
            }
            if (j != N - 1 && j + jump < N) // 오른쪽으로, map을 벗어나지 않을 경우
            {
                dp[i][j + jump] += dp[i][j];
            }
        }
    }

    cout << dp[N - 1][N - 1];

    return 0;
}