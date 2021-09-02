#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, X, cnt; // X : que에 넣을 중요도
    queue<int> que;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> X;
        if (que.empty())
        {
            que.push(X);
        }
        else
        {
            // X가 중요도가 가장 크면 que에 담을 필요없이 바로 프린트 하면되므로 X가 que에서 가장 중요도가 큰 que.front()보다 작거나 같을 경우에만 push
            if (que.front() >= X)
                que.push(X);
        }
    }

    cnt = que.size() - M;
    cout << cnt;

    return 0;
}