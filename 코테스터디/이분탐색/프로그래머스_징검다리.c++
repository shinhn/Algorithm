#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(int distance, vector<int> rocks, int n, int min_dist){
    
    int prev = 0; // 시작점
    int cnt = 0; // 제거할 바위의 수
    
    for(int i=0;i<rocks.size();i++){
        if(rocks[i] - prev < min_dist){ // 바위 제거
            cnt ++;
        }
        else prev = rocks[i];
    }
    if(distance - prev < min_dist) cnt++;
    
    if(cnt <= n) return true;
    
    return false;
}

int solution(int distance, vector<int> rocks, int n) {
    int answer;
    
    sort(rocks.begin(), rocks.end());
    
    int low = 0, high = distance;
    while(low <= high){
        int mid = (low + high)/2;
        
        if(isPossible(distance, rocks, n, mid)){
            answer = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    
    return answer;
}