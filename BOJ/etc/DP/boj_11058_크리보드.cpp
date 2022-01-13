#include <iostream>
#include <algorithm>

using namespace std;

/*
<문제>
크리보드의 버튼을 총 N번 눌러서 화면에 출력할 수 있는 A 개수의 최댓값을 구하라

1 ≤ N ≤ 100

P : 화면에 A를 출력한다
A: 화면을 전체 선택한다
C: 전체 선택한 내용을 버퍼에 복사한다
V: 버퍼가 비어있지 않은 경우에는 화면에 출력된 문자열의 바로 뒤에 버퍼의 내용을 붙여넣는다

초기에 화면이 비어있으므로 처음에 최소 한번은 A를 출력해야함
P -> N-1번 누를 기회 남음

복붙 경우
A-C-V
A-C-V-V-...
(A 와 C는 한세트 -> 기회 2번 사용)

A-C 했을 때 내용을 버퍼에 저장해둬야함

<접근>

(1)
완전탐색 재귀
4가지 선택지 -> O(4^N) -> O(4^100) -> 너무 큼

(2)

dp[i] = i 단계에서 최대로 출력한 A의 개수

dp[1] -> p -> 1

dp[2] -> p p -> 2

dp[3] -> p p p -> 3

dp[4] -> p A C V -> 2(x)
      -> p p p p -> 4

dp[5] -> p p A C V -> 4(x)
      -> p A C V V -> 3(x)
      -> p p p p p -> 5

dp[6] -> p p p A C V -> 6
      -> p p A C V V -> 6
      -> p p p p p p -> 6

dp[7] -> p p p p A C V -> 8 (x)
      -> p p p A C V V -> 9
      -> p p p p p p p -> 7 (x)

1) 복붙 사용 : V의 개수를 하나씩 늘려가면서 세보고 가장 큰것을 저장
2) 그냥 전부 하나씩 출력하는 경우
3) 전단계에서 출력가능한 최대 개수에서 한번만 A 출력하는 경우

1, 2, 3 경우 중 최댓값 저장

<시간복잡도>
O(N*N)

<error>
예시는 모두 잘 출력되는데 틀린 답으로 채점

시도1 : dp를 long long 형으로 바꿔 범위 늘려봄 -> 블로그 보고 참고한건데 dp가 왜 그렇게 커질 수 있는지 감을 못잡았겠음

시도2 : 채점 시작하자 마자 틀리다고 나오는걸 보고
max 함수로 숫자들을 비교할때 오류나나 싶어서 num_1, num_2, num_3 모두 long long 형으로 바꿔줘봤더니 정답 뜸
vscode에서는 안바꿔줘도 상관없었는데 boj 컴파일러에서는 형을 맞춰줘야 하나 봄
*/

int N;
long long dp[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    if (N > 3)
    {
        for (int i = 4; i <= N; i++)
        {
            long long num_1 = 0; // 1) 복붙 사용 : V의 개수를 하나씩 늘려가면서 세보고 가장 큰것을 저장

            for (int j = 1; i - (j + 2) >= 1; j++) // j == ctrl+V의 수 / (j + 2) 에서 2는 ctrl+A, ctrl+C를 의미
            {
                if (num_1 < dp[i - (j + 2)] * (1 + j))
                    num_1 = dp[i - (j + 2)] * (1 + j);
            }

            long long num_2 = i; // 2) 그냥 전부 하나씩 출력하는 경우

            long long num_3 = dp[i - 1] + 1; // 3) 전단계에서 출력가능한 최대 개수에서 한번만 A 출력하는 경우

            dp[i] = max(num_1, max(num_2, num_3));
        }
    }

    cout << dp[N];

    return 0;
}