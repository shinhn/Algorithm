#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cin.ignore();

    while(N--){
        string str;
        getline(cin, str);

        int alp[26];
        fill(alp, alp+26, 0);

        for(int i=0;i<str.length();i++){
            if(str[i] == ' ') continue;
            alp[str[i] - 'a'] ++;
        }

        int max=0, ans;
        for(int i=0;i<26;i++){
            if(alp[i] > max){
                ans = i;
                max = alp[i];
            }
        }

        int cnt = 0;
        for(int i=0;i<26;i++){
            if(max == alp[i])cnt++;
        }

        if(cnt >= 2){
            cout << '?' << "\n";
        }
        else cout << char(ans+'a') << "\n";
    }


    
    return 0;
}