#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        string str;
        int num;
        cin >> str;

        if (str == "push")
        {
            cin >> num;
            st.push(num);
        }
        else if (str == "pop")
        {
            if (st.empty() == true)
            {
                cout << "-1" << '\n';
            }
            else
            {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (str == "size")
        {
            cout << st.size() << '\n';
        }
        else if (str == "empty")
        {
            if (st.empty() == true)
                cout << '1' << '\n';
            else
                cout << '0' << '\n';
        }
        else if (str == "top")
        {
            if (st.empty() == true)
                cout << "-1" << '\n';
            else
                cout << st.top() << '\n';
        }
    }
}