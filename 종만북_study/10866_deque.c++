#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    string cmd;
    deque<int> que;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push_front")
        {
            cin >> X;
            que.push_front(X);
        }
        if (cmd == "push_back")
        {
            cin >> X;
            que.push_back(X);
        }
        else if (cmd == "pop_front")
        {
            if (que.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << que.front() << '\n';
                que.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (que.empty())
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << que.back() << '\n';
                que.pop_back();
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