#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    string cmd;
    queue<int> que;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> X;
            que.push(X);
        }
        else if (cmd == "pop")
        {
            if (que.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << que.front() << '\n';
                que.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << que.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (que.empty())
                cout << '1' << '\n';
            else
                cout << '0' << '\n';
        }
        else if (cmd == "front")
        {
            if (que.empty())
                cout << "-1" << '\n';
            else
                cout << que.front() << '\n';
        }
        else if (cmd == "back")
        {
            if (que.empty())
                cout << "-1" << '\n';
            else
                cout << que.back() << '\n';
        }
    }

    return 0;
}