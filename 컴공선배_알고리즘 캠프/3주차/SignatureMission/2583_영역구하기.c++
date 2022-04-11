#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int M, N, K;
bool map[101][101];
bool visited[101][101];
int cnt = 0;
vector<int> area;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void DFS(int y, int x)
{
    cnt++;
    visited[y][x] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N)
            continue;

        if (map[ny][nx] == false && visited[ny][nx] == false)
        {
            DFS(ny, nx);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N >> K;
    for (int i = 0; i < K; i++)
    {
        int x1, y1, x2, y2; // 왼쪽 아래 꼭지점 (x1, y1), 오른쪽 위 꼭지점 (x2, y2)
        cin >> x1 >> y1 >> x2 >> y2;

        for (int x = x1; x < x2; x++) // 오른쪽 위 꼭지점 (x2, y2) 은 map에 포함하지 않음 (이유는 풀이법 참고)
        {
            for (int y = y1; y < y2; y++)
            {
                map[x][y] = true; // 사각형 영역
            }
        }
    }

    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < M; y++)
        {
            if (map[x][y] == false && visited[x][y] == false){ // 사각형 영역이 아닌곳만 이동 가능 (map[x][y] == false)
                cnt = 0;
                DFS(x, y);
                area.push_back(cnt);
            }  
        }
    }

    sort(area.begin(), area.end());

    cout << area.size() << "\n";
    for (int i = 0; i < area.size(); i++)
    {
        cout << area[i] << " ";
    }
    cout << "\n";

    return 0;
}