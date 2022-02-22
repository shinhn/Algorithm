#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string str;
    cin >> T;

    while (T--)
    {
        stack<char> st;

        cin >> str;
        int key = 1;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                st.push('(');
            else
            {
                if (st.empty()){
                    cout << "NO\n";
                    key = 0;
                    break;
                }
                else st.pop();
            }
        }

        if(key==1){
            if (st.empty())
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}