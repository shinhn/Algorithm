#include <string>
#include <vector>
#include <iostream>

using namespace std;

int graph[101][101];
bool visited[101];

int dfs(int node, int n){
    if(visited[node]) return 0;
    visited[node] = true;
    
    int network_size = 1;
    
    for(int i=1;i<=n;i++){
        if(graph[node][i] == 1){
            network_size += dfs(i, n);
        }
    }
    
    return network_size;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 100;
    
    for(int i=0;i<wires.size();i++){
        int n1 = wires[i][0];
        int n2 = wires[i][1];
        graph[n1][n2] = 1;
        graph[n2][n1] = 1;
    }
    
    for(int i=0;i<wires.size();i++){
        // 전선 하나 끊음
        int n1 = wires[i][0];
        int n2 = wires[i][1];
        graph[n1][n2] = 0;
        graph[n2][n1] = 0;
        
        // 초기화
        fill(visited, visited + 101, false);
        
        // 각 네트워크 사이즈 측정
        vector<int> net_sizes;
        for(int j=1;j<=n;j++){
            int net_size = dfs(j, n);
            if(net_size != 0) net_sizes.push_back(net_size);
        }
        
        if(abs(net_sizes[0] - net_sizes[1]) < answer){
            answer = abs(net_sizes[0] - net_sizes[1]);
        }
        
        // 다시 전선 연결
        graph[n1][n2] = 1;
        graph[n2][n1] = 1;
    }
    
    return answer;
}