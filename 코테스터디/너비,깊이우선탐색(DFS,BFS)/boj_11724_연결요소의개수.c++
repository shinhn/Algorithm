#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
연결 요소의 개수
모든 노드 방문 -> 연결 요소 탐색하며 전부 방문체크 -> 새로운 노드 방문시, 연결 요소의 개수 카운트
dfs, 인접행렬로 구현
*/

int N, M, u, v, cnt;
bool map[1001][1001];
bool visited[1001];

void dfs(int n){
    visited[n] = true; // 방문체크

    for(int i=1;i<=N;i++){
        if(map[n][i] && !visited[i]) dfs(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    
    for(int i=0;i<M;i++){
        cin >> u >> v;
        map[u][v] = true;
        map[v][u] = true;
    }

    for(int i=1;i<=N;i++){
        if(!visited[i]){
            cnt ++; // 새로운 노드 방문시, 연결 요소의 개수 카운트
            dfs(i);
        }
    }    

    cout << cnt << "\n";

    return 0;
}