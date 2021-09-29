// 풀이 참고
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; // 테스트케이스 수
    cin >> T;

    while (T--)
    {
        int N, M, X, cnt = 0; // X : 중요도, cnt:인쇄 순서
        queue<pair<int, int> > que;
        priority_queue<int> pq;

        cin >> N >> M;

        for (int i = 0; i < N; i++)
        {
            cin >> X;
            // queue는 index가 없기 때문에 pair을 이용하여 index를 같이 넣어줌
            que.push(make_pair(i, X));
            // 중요도 순으로 인쇄 순서를 알기 위해 우선순위 queue 사용
            pq.push(X);
        }

        while (!que.empty())
        {
            int index = que.front().first;
            int value = que.front().second;
            que.pop();

            if (value == pq.top()) // 중요도 순으로 인쇄할 차례일 경우
            {
                cnt++;
                pq.pop();

                if (index == M) // 찾고자 하는 순서일 경우
                {
                    cout << cnt << '\n';
                    break;
                }
            }
            else // 인쇄할 차례가 아닐 경우, 다시 que에 push
            {
                que.push(make_pair(index, value));
            }
        }
    }

    return 0;
}