#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

queue<int> que;
int idx, total_bridge_weight;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    
    for(int i=0;i<bridge_length;i++){ // 다리에 처음으로 들어간 트럭의 이동시간 측정을 위해 의미 없는 트럭(무게 0)을 다리 길이 만큼 넣어줌
        que.push(0);
    }
    
    while(!que.empty()){
        
        // 다리의 맨 앞 트럭 빼줌
        total_bridge_weight -= que.front();
        que.pop();
        answer++;
        
        if(idx < truck_weights.size() && total_bridge_weight + truck_weights[idx] <= weight){ // 다리에 넣을 수 있을 떄
            que.push(truck_weights[idx]);
            total_bridge_weight += truck_weights[idx];
            idx++;
        }
        else if(idx < truck_weights.size()){ // 다리에 넣을 수 없지만, 아직 대기하는 트럭이 남았을 때 -> 의미 없는 트럭(무게 0) 추가
            que.push(0);
        }
        
    }
    
    return answer;
}