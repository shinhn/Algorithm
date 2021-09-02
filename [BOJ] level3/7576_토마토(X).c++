#include <iostream>
#include <queue>

using namespace std;

/*
익은 토마토들의 인접한 곳(상하좌우)에 있는 익지 않은 토마토들은 익은 토마토의 영향을 받아 익게 됨
최소 일수 ? -> 최단경로(BFS)

1 : 익은 토마토
0 : 익지 않은 토마토
-1 : 토마토가 들어있지 않은 칸

저장될 때부터 모든 토마토가 익어있는 상태이면 0을 출력해야 하고, 토마토가 모두 익지는 못하는 상황이면 -1을 출력
*/

int M, N, tmp, cnt; // M(가로), N(세로)
int tomato[1002][1002];
int visited[1002][1002];
queue<pair<int, int> > que;
int direction[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void BFS()
{
    while (que.empty() == false)
    {
        pair<int, int> tmp;
        tmp = que.front();
        que.pop();

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> cur;
            cur.first = tmp.first + direction[i][0];
            cur.second = tmp.second + direction[i][1];

            if (cur.first < 0 || cur.first >= N || cur.second < 0 || cur.second >= M)
                continue;
            if (visited[cur.first][cur.second] >= 0 || tomato[cur.first][cur.first] == -1)
                continue;

            visited[cur.first][cur.second] = visited[tmp.first][tmp.second] + 1;
            cnt = visited[cur.first][cur.second];
            que.push(cur);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> tomato[i][j];
            visited[i][j] = -1;

            if (tomato[i][j] == 1)
            {
                que.push(make_pair(i, j)); // 탐색 시작 위치
                visited[i][j] = 0;
            }
        }
    }

    BFS();

    bool check = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (tomato[i][j] == 0 && visited[i][j] == -1)
            {
                cout << -1;
                check = false;
                break;
            }
        }
        if (check == false)
            break;
    }

    if (check == true)
        cout << cnt;
}
