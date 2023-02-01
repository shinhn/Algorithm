#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> que;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    for(int i=0;i<scoville.size();i++){
        que.push(scoville[i]);
    }
    
    while(que.top() < K && que.size() >= 2){
        answer ++;
        
        int new_food = 0;
        new_food += que.top();
        que.pop();
        new_food += 2*que.top();
        que.pop();
        
        que.push(new_food);
    }
    
    if(que.top() < K) return -1; // 모든 음식의 스코빌 지수를 K 이상으로 만들 수 없는 경우
    
    return answer;
}