#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int j = 0; j < N; j++)
    {
        stack<char> st;
        string str;
        cin >> str;

        int key = 1;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                st.push('(');
            else
            {
                if (st.empty() == true)
                {
                    cout << "NO" << '\n';
                    key = 0;
                    break;
                }
                else
                    st.pop();
            }
        }

        if (key == 1)
        {
            if (st.empty() == true)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}