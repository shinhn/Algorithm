#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

int arr[200001];
int pSum[200001];
int ans;

map<int, int> pSum_cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    for(int i=0;i<N;i++){
        cin >> arr[i];
        if(i==0) pSum[0] = arr[0];
        else pSum[i] = pSum[i-1] + arr[i];
    }

    for(int i=0;i<N;i++){
        cout << pSum[i] << " ";
        pSum_cnt[pSum[i]]++;
    }
    cout << "\n";

    for(auto iter = pSum_cnt.begin();iter != pSum_cnt.end();iter++){
        cout << iter -> first << " : " << iter -> second << "\n";

        if(iter -> first == K) {
            cout << iter -> first << " --> " << "\n";
            ans += iter -> second;
        }

        for(auto iter2 = iter;iter2 != pSum_cnt.end();iter2++){
            if(iter2->first == iter->first) continue;
            
            if((iter2 -> first) - (iter -> first) == K) {
                cout << iter -> first << " --> " << iter2 -> first << "\n";
                ans += ((iter -> second)*(iter2 -> second));
            }
        }
    }

    cout << ans << "\n";

    return 0;
}