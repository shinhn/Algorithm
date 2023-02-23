#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool visited[200];

void dfs(int n, vector<vector<int>> computers, int node){
    visited[node] = true;
    
    for(int i=0;i<computers[node].size();i++){
        if(visited[i]) continue;
        if(computers[node][i] == 0) continue;
        
        dfs(n, computers, i);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        answer ++;
        dfs(n, computers, i);
    }
    
    return answer;
}