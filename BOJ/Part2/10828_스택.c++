#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> st;
    int N;
    string order;

    cin >> N;
    while (N--)
    {
        cin >> order;

        if (order == "push")
        {
            int X;
            cin >> X;
            st.push(X);
        }
        if (order == "pop")
        {
            if (st.empty())
                cout << "-1" << '\n';
            else
            {
                cout << st.top() << '\n';
                st.pop();
            } 
        }
        if (order == "size")
        {
            cout << st.size() << '\n';
        }
        if (order == "empty")
        {
            if (st.empty())
                cout << '1' << '\n';
            else
                cout << '0' << '\n';
        }
        if (order == "top")
        {
            if (st.empty())
                cout << "-1" << '\n';
            else
                cout << st.top() << '\n';
        }
    }

    return 0;
}