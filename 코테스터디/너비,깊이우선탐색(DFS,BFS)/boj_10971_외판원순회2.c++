#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
N이 최대 10이므로 모든 도시를 가보는 경우의 수는 N을 일렬로 세우는 방법의 수와 같으므로 최대 10! 이다.
즉, 모든 경우를 다 가보고 최소 비용을 출력하면 됨 -> 완탐
*/

int N;
int W[11][11];
bool visited[11];
int ans=2e9; // 비용
int start_city; // 출발 도시

void dfs(int node, int cnt_visited, int cnt){
    if(cnt_visited == N) { // 모든 도시 방문했을 경우
        if(W[node][start_city] > 0) ans = min(ans, cnt+W[node][start_city]); // 시작점으로 돌아갈 수 있다면 비용 추가
        return;
    }

    for(int i=1;i<=N;i++){
        if(W[node][i] == 0) continue;
        if(visited[i]) continue;
        
        visited[i] = true;
        dfs(i, cnt_visited+1, cnt + W[node][i]);
        visited[i] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> W[i][j];
        }
    }

    for(int i=1;i<=N;i++){ // 시작도시
        start_city = i;
        
        visited[i] = true;
        dfs(i, 1, 0);
        visited[i] = false;
    }

    cout << ans << "\n";

    return 0;
}