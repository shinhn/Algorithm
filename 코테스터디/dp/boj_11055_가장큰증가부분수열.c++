#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N;
int arr[1001];
vector<int> dp(1001);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        dp[i] = arr[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[j] < arr[i] && dp[j] + arr[i] > dp[i]){
                dp[i] = dp[j] + arr[i];
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}