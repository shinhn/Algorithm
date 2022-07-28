#include <iostream>
#include <queue>
using namespace std;

int h, w, y1, x1, y2, x2, ans;
int day[101][101];
bool visited[101][101];
queue<pair<int, int>> que;

int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,-1,1};

void bfs(){

    while(!que.empty()){
        int ny = que.front().first;
        int nx = que.front().second;
        que.pop();

        ans = day[ny][nx];

        for(int i=0;i<4;i++){
            int nny = ny + dy[i];
            int nnx = nx + dx[i];

            if(nny >= h || nny < 0 || nnx >= w || nnx < 0) continue;
            if(visited[nny][nnx]) continue;

            visited[nny][nnx] = true;
            que.push({nny, nnx});

            day[nny][nnx] = day[ny][nx] + 1;

            ans++;
        }

    }

}

int main(){

    cin >> h >> w;

    cin >> y1 >> x1 >> y2 >> x2;

    visited[y1][x1] = true;
    visited[y2][x2] = true;

    que.push({y1, x1});
    que.push({y2, x2});

    day[y1][x1] = 1;
    day[y2][x2] = 1;

    bfs();

    cout << ans;

    return 0;
}