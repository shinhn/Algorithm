#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
집의 개수 N이 최대 200,000 개 이므로 모든 경우의 수를 세어서 구할 수 없음 O(200,000^2)
-> 이분탐색을 통해 가장 인접한 두 공유기 사이의 거리를 최대로 갖는 사이 거리를 찾을 수 있음
*/

int N, C, ans = 0;
int house[200001];

bool isPossible(int dist){ // dist : 가장 인접한 두 공유기 사이의 거리

    int cnt = 1; // 첫번째 집에 공유기 설치하고 시작
    int prev = house[0];

    for(int i=1;i<N;i++){
        if(house[i]-prev >= dist){ // 가장 인접한 두 공유기 사이의 거리의 최댓값이 dist가 되어야 하므로 dist 보다 멀리 떨어져 있는 경우에만 공유기 설치
            cnt ++;
            prev = house[i];
        }
    }

    if(cnt >= C) return true;

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> C;

    for(int i=0;i<N;i++){
        cin >> house[i];
    }

    sort(house, house + N);

    int low = 1, high = house[N-1] - house[0]; // 인접한 두 공유기 사이 거리 범위는 1 ~ (첫째 집에서 마지막 집까지의 거리)
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