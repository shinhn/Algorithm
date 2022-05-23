#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

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

    int max_cnt=0;
    char ans;
    for(int i=0;i<26;i++){
        if(alp[i] > max_cnt){
            max_cnt = alp[i];
            ans = char(i+'A');
        }
    }

    cout << ans << "\n";

    return 0;
}