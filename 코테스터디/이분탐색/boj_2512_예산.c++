#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
int arr[100001];
int high, low = 0, ans;

bool isPossible(int mid){
    int sum = 0;

    for(int i=0;i<N;i++){
        if(arr[i] < mid) sum += arr[i];
        else sum += mid;
    }

    if(sum <= M) return true;
    
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        high = max(high, arr[i]);
    }
    cin >> M;

    while(low <= high){
        int mid = (low + high)/2;

        if(isPossible(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout << ans << "\n";

    return 0;
}