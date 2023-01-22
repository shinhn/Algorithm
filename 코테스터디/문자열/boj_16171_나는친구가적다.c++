#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string str, keyword, alp;
int ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str >> keyword;

    for(int i=0;i<str.length();i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alp += str[i];
        }
    }

    for(int i=0;i<alp.length();i++){
        if(alp[i] == keyword[0]){
            int cnt=0;
            for(int j=0;j<keyword.length();j++){
                if(alp[i+j] == keyword[j]) cnt++;
            }
            if(cnt == keyword.length()) ans = 1;
        }
    }

    cout << ans << "\n";

    return 0;
}