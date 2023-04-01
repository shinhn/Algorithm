#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

bool check(queue<int> que, int doc){
    while(!que.empty()){
        if(que.front() > doc) return true;
        que.pop();
    }
    
    return false;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> que;
    
    for(int i=0;i<priorities.size();i++){
        que.push(priorities[i]);
    }
    
    while(1){
        int doc = que.front();
        if(check(que, doc)){ // 나머지 인쇄 대기목록에서 J보다 중요도가 높은 문서가 존재
            que.pop();
            que.push(doc);
            
            if(location > 0) location --;
            else if(location == 0) location = que.size()-1;
        }
        else{
            que.pop();
            answer ++;
            
            if(location > 0) location --;
            else if(location == 0) break;
        }
    }
    
    return answer;
}