#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string str[5], ans;
char words[5][15];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<5;i++){
        cin >> str[i];

        for(int j=0;j<str[i].length();j++){
            words[i][j] = str[i][j];
        }
    }

    for(int j=0;j<15;j++){
        for(int i=0;i<5;i++){
            if(j >= str[i].length()) continue;
            ans += words[i][j];
        }
    }

    cout << ans << "\n";

    return 0;
}