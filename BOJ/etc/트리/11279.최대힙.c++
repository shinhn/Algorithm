#include <iostream>
#include <queue>

using namespace std;

int N;
priority_queue<int> que;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    while (N--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            if (que.empty())
                cout << '0' << '\n';
            else
            {
                cout << que.top() << '\n';
                que.pop();
            }
        }
        else
        {
            que.push(x);
        }
    }

    return 0;
}