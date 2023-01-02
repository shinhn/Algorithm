#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

/*
경로 찾기 문제
dfs는 모든 경로를 탐색해야 하기 때문에 효율을 위해 bfs(queue) 사용

모든지점에서 도착지점까지 모두 탐색하면 되지만 그럴 경우
인접행렬로 구현한 bfs의 시간 복잡도 O(n*m) = 1,000,000
모든지점에서 bfs를 돌리면 n*m*O(n*m) = 1,000,000,000,000 -> 시간초과이므로

도착지점을 시작지점으로 보고 모든지점까지의 거리를 구하면 bfs 한번, 즉 O(n*m) = 1,000,000 만으로 처리가 가능함
*/

bool visited[1001][1001];
queue<pair<int, int> > que;

int map[1001][1001];
int dist[1001][1001]; // 목표지점까지의 거리
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

int n, m, sy, sx;

void bfs(int y, int x)
{
    visited[y][x] = true;
    que.push({y, x});

    while (!que.empty())
    {
        y = que.front().first;
        x = que.front().second;
        que.pop();

        for (int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (map[ny][nx] == 0 || map[ny][nx] == 2) continue;
            if (visited[ny][nx]) continue;

            visited[ny][nx] = true;
            que.push({ny, nx});
            dist[ny][nx] = dist[y][x]+1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> map[i][j];
            if (map[i][j] == 2){
                sy = i;
                sx = j;
            }
        }
    }

    bfs(sy, sx);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(map[i][j] == 0) cout << "0 "; // 원래 갈 수 없는 땅인 위치는 0을 출력
            else if(!visited[i][j]) cout << "-1 "; // 원래 갈 수 있는 땅인 부분 중에서 도달할 수 없는 위치는 -1을 출력
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}