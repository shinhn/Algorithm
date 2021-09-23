#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    queue<int> que;

    for (int i = 1; i <= N; i++)
    {
        que.push(i);
    }

    cout << '<';

    while (1)
    {
        if (que.empty() == true)
            break;

        for (int i = 1; i <= K; i++)
        {
            if (i % K == 0)
            {
                cout << que.front();
                que.pop();
                if (que.empty() == false)
                    cout << ", ";
            }
            else
            {
                int tmp = que.front();
                que.pop();
                que.push(tmp);
            }
        }
    }

    cout << '>';
}