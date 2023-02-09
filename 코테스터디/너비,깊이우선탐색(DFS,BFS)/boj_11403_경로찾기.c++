#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N, start, flag;
int map[101][101];
int ans[101][101];
queue<int> que;
bool visited[101];

void bfs(int node){
    que.push(node);

    while(!que.empty()){
        int n = que.front();
        que.pop();

        for(int i=1;i<=N;i++){
            if(map[n][i] == 0) continue;
            if(visited[i]) continue;

            ans[start][i] = 1;
            visited[i] = true;
            que.push(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> map[i][j];
        }
    }

    for(int i=1;i<=N;i++){
        start = i;
        fill(visited, visited+101, false);
        bfs(i);
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}