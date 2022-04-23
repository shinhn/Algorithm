#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    int dp[101][10];
    dp[1][0]=0; 
    
    for(int i=0;i<=9;i++){
        dp[1][i]=1; 
    }
    
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j==0) dp[i][j] = dp[i-1][1]%1000000000; // i 0로 끝남 -> i-1 1으로 끝남
            if(j==9) dp[i][j] = dp[i-1][8]%1000000000; // i 9로 끝남 -> i-1 8으로 끝남
            if(j>=1&&j<=8){
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j - 1]) % 1000000000;
            }
        }
    }
    
    int ans=0;
    for(int j=0;j<=9;j++){
        ans+=dp[n][j];
    }
    cout << ans%1000000000 << "\n";
    

    return 0;
}