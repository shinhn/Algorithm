#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int m;
        string str;

        cin >> m;
        cin >> str;

        for(int j=0;j<str.length();j++)
        {
            for(int k=0;k<m;k++)
            {
                cout << str[j];
            }
        }

        cout << '\n';
    }
    
}

/*
<문자열 길이 봔환 함수>

헤더 : #include <string>
함수 : (문자열).length()
*/