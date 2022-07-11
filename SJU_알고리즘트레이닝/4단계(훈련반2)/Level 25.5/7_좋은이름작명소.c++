#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string str;
vector<string> ans;
int n;
bool flag;

int main(){
    cin >> n;

    for(int j=0;j<n;j++){
        flag = false;

        cin >> str;

        // 1. 소문자만 사용할 것.
        for(int i=0;i<str.length();i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                ans.push_back("no");
                flag = true;
            }
        }

        if(flag == true) continue;

        // 2. 특수문자 사용금지.

        // 3. 같은 알파벳이 2개 이하로만 사용할 것.
        int alp[26] = {0};
        for(int i=0;i<str.length();i++){
            alp[str[i]-'a'] ++;
            if(alp[str[i]-'a'] > 2){
                ans.push_back("no");
                flag = true; 
            }
        }

        if(flag == true) continue;

        // 4. 모음 (a, e, i, o, u) 알파벳은 3개 사용할 것. (중복 포함)
        int sum = alp['a'-'a'] + alp['e'-'a'] + alp['i'-'a'] + alp['o'-'a'] + alp['u'-'a'];
        if(sum != 3){
            ans.push_back("no");
            flag = true;
        }

        if(flag == true) continue;

        // 좋은이름
        ans.push_back("good");
    }

    for(int j=0;j<ans.size();j++){
        cout << ans[j] << "\n";
    }
    

    return 0;
}