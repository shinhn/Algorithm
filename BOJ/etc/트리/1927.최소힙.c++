#include <iostream>
#include <queue>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int> > que;

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