/*
종만북에서는 연결리스트를 활용하여 풀었음, 근데 책 후반에서 표준 라이브러리 (큐,테크,스텍)등을 사용하여
연결리스트나 동적배열등의 기초 자료 구조를 직접 구현하지 않고 시간을 절약할 수 있다고 함.
따라서 이번 문제는 queue로 원형 연결 리스트처럼 구현.
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> que;
    int N, K;

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        que.push(i);
    }

    cout << "<";

    while (que.size() - 1 > 0)
    {
        for (int i = 1; i < K; i++)
        {
            int tmp = que.front();
            que.pop();
            que.push(tmp);
        }
        cout << que.front() << ", ";
        que.pop();
    }

    cout << que.front() << ">";
}