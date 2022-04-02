#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        stack<char> st;
        string str;
        bool ans = true;
        cin >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                st.push('(');
            else
            {
                if (st.empty())
                {
                    ans = false;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if (!st.empty())
            ans = false;

        if (ans == true)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}