#include <iostream>
#include <queue>
using namespace std;

int N, M, ans;
int map[101][101];
bool visited[101][101];
queue<pair<int, int>> que;

int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,-1,1};

void bfs(int i, int j){
    que.push({i,j});
    visited[i][j] = true;

    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();

        for(int k=0;k<4;k++){
            int ny = y + dy[k];
            int nx = x + dx[k];

            if(ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
            if(visited[ny][nx]) continue;
            if(map[ny][nx] == 0) continue;

            que.push({ny, nx});
            visited[ny][nx] = true;
        }
    }

    ans++;
}

int main(){

    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(map[i][j] == 1 && visited[i][j] == false){
                bfs(i, j);
            }
        }
    }

    cout << ans;


    return 0;
}