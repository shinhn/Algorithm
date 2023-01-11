#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
K <= N <= 1,000,000
K는 10,000 이하이기 때문에 모든 K개의 랜선을 잘라가며 총 N개를 만들 수 있는 길이를 찾으려면
1,000,000 x 10,000 = 10,000,000,000 -> 시간초과

따라서 이분탐색으로 찾아보자.
*/

int K, N;
long long cable[10001];
long long low = 1, high = 0, ans;

int Cnt_cable(long long size){
    int sum = 0;
    for(int i=0;i<K;i++){
        sum += cable[i]/size;
    }

    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K >> N;

    for(int i=0;i<K;i++){
        cin >> cable[i];
        high = max(high, cable[i]);
    }

    while(low <= high){
        long long mid = (low + high)/2;

        if(Cnt_cable(mid) >= N) {
            low = mid + 1;
            ans = mid;
        }
        else high = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}