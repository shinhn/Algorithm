#include <iostream>
#include <algorithm>

using namespace std;

/*
<문제>
B, O, J 순서대로 점프하여 1부터 N까지 이동 (1번은 무조건 B)
k칸 점프 -> 에너지의 양 k*k

에너지 양의 최솟값을 구하라
만날 수 없는 경우에는 -1 출력 -> BOJ 순서를 지키지 못할 경우

<접근>

(1)
B O..n..O J..m..J ...

점프 k 를 최대한 줄여야 함
-> n과 m이 최소가 되는 지점은 첫번째 J
이런식으로 일일이 찾아 나가기에는 1 ≤ N ≤ 1,000 이라 모든 경우를 다 따지기에 너무 오래 걸림

(2)
단순하게
-> B -> O 에서 B를 거치는게 에너지가 덜 드는지 안거치는게 덜 드는지 판단

dp[i] = i번째까지 오는데 사용한 에너지의 양

<error>
처음에 dp를 초기화 할때
시작부터 i까지 점프했을 경우로 해줬더니
for (int i = 1; i < N; i++)
    {
        dp[i] = i*i; // 큰 값으로 초기화
    }
min에서 바뀌지 않는 경우가 생겨서
아에 큰 수 1000*1000로 초기화 바꿔줌
*/

int N;
char str[1001];
int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> str[i];
    }

    dp[0] = 0;
    for (int i = 1; i < N; i++)
    {
        dp[i] = 1000 * 1000; // 큰 값으로 초기화
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (str[i] == 'B')
        {
            for (int j = i + 1; j < N; j++)
            {
                if (str[j] == 'O')
                {
                    int min_dp;
                    min_dp = min(dp[j], dp[i] + (j - i) * (j - i));
                    dp[j] = min_dp;
                }
            }
        }
        if (str[i] == 'O')
        {
            for (int j = i + 1; j < N; j++)
            {
                if (str[j] == 'J')
                {
                    int min_dp;
                    min_dp = min(dp[j], dp[i] + (j - i) * (j - i));
                    dp[j] = min_dp;
                }
            }
        }
        if (str[i] == 'J')
        {
            for (int j = i + 1; j < N; j++)
            {
                if (str[j] == 'B')
                {
                    int min_dp;
                    min_dp = min(dp[j], dp[i] + (j - i) * (j - i));
                    dp[j] = min_dp;
                }
            }
        }
    }

    if (dp[N - 1] == 1000 * 1000) // 만날 수 없는 경우에는 -> 마지막 dp가 변경되지 않음 -> -1 출력
        cout << "-1";
    else
        cout << dp[N - 1];

    return 0;
}