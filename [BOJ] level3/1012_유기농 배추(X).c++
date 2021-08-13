#include <iostream>
#include <queue>
using namespace std;

/*
인접된 곳을 우선 탐색해야 하므로 BFS(너비우선탐색) 사용
*/

int M, N, K, x, y, ans = 0, T;
bool map[51][51] = {false}, visited[51][51] = {false};
queue<pair<int, int> > que;
int direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void BFS(int px, int py)
{
    visited[py][px] = true;
    que.push(make_pair(px, py));

    while (que.empty() == false)
    {
        int px1 = que.front().first;
        int py1 = que.front().second;
        que.pop();

        for (int i = 0; i < 4; i++)
        {
            int px2 = px1 + direction[i][0];
            int py2 = py1 + direction[i][1];

            if (px2 >= 0 && py2 >= 0 && px2 < M && py2 < N && visited[py2][px2] == false && map[py2][px2] == true)
            {
                que.push(make_pair(px2, py2));
                visited[py2][px2] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T > 0)
    {
        T--;

        cin >> M >> N >> K;
        while (K > 0)
        {
            K--;
            cin >> x >> y;
            map[y][x] = true;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (visited[i][j] == false && map[i][j] == true)
                {
                    BFS(j, i);
                    ans++;
                }
            }
        }

        cout << ans << '\n';

        // visited, map, ans 초기화
        fill(&visited[0][0], &visited[51][51], false); // fill(시작 위치, 끝나는 위치 +1, 초기화 값);
        fill(&map[0][0], &map[51][51], false);
        ans = 0;
    }
}

// 예제대로 나오는데 왜 틀린 답으로 뜨는지 모르겠음