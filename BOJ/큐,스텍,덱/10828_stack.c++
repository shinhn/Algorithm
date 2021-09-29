#include <iostream>
#include <stack>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, X;
    string cmd;
    cin >> N;
    stack<int> st;

    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> X;
            st.push(X);
        }
        else if (cmd == "pop")
        {
            if (!st.empty())
            {
                cout << st.top() << '\n';
                st.pop();
            }
            else
                cout << "-1" << '\n';
        }
        else if (cmd == "size")
        {
            cout << st.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (st.empty())
                cout << '1' << '\n';
            else
                cout << '0' << '\n';
        }
        else if (cmd == "top")
        {
            if (!st.empty())
                cout << st.top() << '\n';
            else
                cout << "-1" << '\n';
        }
        else
            break;
    }

    return 0;
}