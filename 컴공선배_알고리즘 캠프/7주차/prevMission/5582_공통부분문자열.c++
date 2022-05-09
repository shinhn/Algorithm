#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string s, t;
int ans, dp[4001][4001];
int main(){
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < t.size(); j++){
            if(s[i] == t[j]){
                dp[i+1][j+1] = dp[i][j] + 1;
                ans = max(ans,dp[i+1][j+1]);
            }
        }
    }
    cout << ans << '\n';
}