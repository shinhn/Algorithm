#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, V;
bool graph[1001][1001];
bool visited[1001];
queue<int> que;

void DFS(int v){
    visited[v] = true;
    cout << v << " ";

    for(int i=1;i<=N;i++){
        if(visited[i] == false && graph[v][i] == true){
            DFS(i);
        }
    }
}

void BFS(int v){
    visited[v] = true;
    cout << v << " ";
    que.push(v);

    while(!que.empty()){
        int n = que.front();
        que.pop();
        
        for(int i=1;i<=N;i++){
            if(visited[i] == false && graph[n][i] == true){
                que.push(i);
                visited[i] = true;
                cout << i << " ";
            }
        }
        
    }
}

int main(){

    cin >> N >> M >> V;

    for(int i=0;i<M;i++){
        int n1, n2;
        cin >> n1 >> n2;
        graph[n1][n2] = true;
        graph[n2][n1] = true;
    }

    DFS(V);
    cout << "\n";

    fill(visited, visited+1001, false);

    BFS(V);
    cout << "\n";

    return 0;
}