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

    stack<double> st;

    int n;
    string str;
    cin >> n >> str;

    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }

    for(int i=0;i<str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){ // 피연산자일때
            int idx = str[i]-'A';
            st.push(num[idx]);
        }
        else{ // 연산자일때
            double a, b;
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();

            if(str[i] == '+') st.push(a+b);
            if(str[i] == '-') st.push(a-b);
            if(str[i] == '*') st.push(a*b);
            if(str[i] == '/') st.push(a/b);
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << st.top() << "\n";

    return 0;
}