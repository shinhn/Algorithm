#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int arr[200002];
int pSum[200002];
long long ans;

map<int, int> pSum_cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    for(int i=1;i<=N;i++){
        cin >> arr[i];
        pSum[i] = pSum[i-1] + arr[i];
    }

    for(int i=1;i<=N;i++){
        if(pSum[i] == K) ans++;
        if(pSum_cnt[pSum[i]-K]) ans+=pSum_cnt[pSum[i]-K];
        pSum_cnt[pSum[i]]++;
    }

    cout << ans << "\n";

    return 0;
}