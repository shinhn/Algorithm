#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
int cnt[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    for(int i=0;i<str.size();i++){
        cnt[str[i]-'A'] ++;
    }

    int cnt_max=0;
    char ans;
    for(int i=0;i<26;i++){
        if(cnt_max < cnt[i]){
            cnt_max = cnt[i];
            ans = char(i+'A');
        }
    }

    cout << ans;

    return 0;
}