#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
int alp[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    for(int i=0;i<str.size();i++){
        alp[str[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(alp[i]!=0) cout << char(i+'A');
    }

    return 0;
}