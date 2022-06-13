#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str1, str2, str3;
int cnt_alp1[26],cnt_alp2[26],cnt_alp3[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str1 >> str2 >> str3;

    for(int i=0;i<str1.size();i++){
        cnt_alp1[str1[i]-'A']++;
    }

    for(int i=0;i<str2.size();i++){
        cnt_alp2[str2[i]-'A']++;
    }

    for(int i=0;i<str3.size();i++){
        cnt_alp3[str3[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(cnt_alp1[i]==0 && cnt_alp2[i]==0 && cnt_alp3[i]==0) continue;
        if(cnt_alp1[i]==0 && cnt_alp2[i]==0 && cnt_alp3[i]!=0) continue;
        if(cnt_alp1[i]!=0 && cnt_alp2[i]==0 && cnt_alp3[i]==0) continue;
        if(cnt_alp1[i]==0 && cnt_alp2[i]!=0 && cnt_alp3[i]==0) continue;
        cout << "No";
        return 0;
    }

    cout << "Perfect";

    return 0;
}