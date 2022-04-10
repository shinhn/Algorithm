#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

string map[101];
bool visited[101][101];
int dist[101][101]; // 최소 거리를 알아야 하므로 특정 좌표까지의 최소 거리를 저장하면서 가야 함

queue<pair<int,int>> que; // 좌표이므로 pair 사용

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> map[i];
    }

    dist[0][0] = 1;
    que.push({0,0});
    visited[0][0] = true;

    while(!que.empty()){
        pair<int,int> point = que.front(); // 현재 위치
        que.pop();

        for(int i=0;i<4;i++){
            int nx = point.first + dx[i];
            int ny = point.second + dy[i];

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(map[nx][ny] == '0' || visited[nx][ny] == true) continue; // 방문하지 않은 곳만 방문하므로 다돌고 저장되어 있는 거리는 최초에 저장한 최소거리임

            dist[nx][ny] = dist[point.first][point.second] + 1;
            que.push({nx, ny});
            visited[nx][ny] = true;
        }
    }

    cout << dist[N-1][M-1];
    return 0;
}