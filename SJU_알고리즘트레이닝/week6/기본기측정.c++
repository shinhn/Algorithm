#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
int alp[26];
int max_alp,idx;

int main()
{
    cin >> str;

    for(int i=0;i<str.size();i++){
        alp[str[i]-'A'] ++;
    }

    for(int i=0;i<26;i++){
        if(max_alp < alp[i]){
            max_alp = alp[i];
            idx = i;
        }
    }

    cout << char(idx + 'A') << " " << max_alp;

    return 0;
}