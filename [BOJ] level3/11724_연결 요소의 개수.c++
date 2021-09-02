#include <iostream>

using namespace std;

bool map[1001][1001] = {false};
bool visited[1001] = {false};
int N, M, u, v, sum = 0;

void DFS(int n)
{
    visited[n] = true;

    for (int i = 1; i <= N; i++)
    {
        if (map[n][i] == true && visited[i] == false)
        {
            DFS(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        // 방향이 없는 그래프이기 때문에 양쪽 모두 연결
        map[u][v] = true;
        map[v][u] = true;
    }

    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == false)
        {
            DFS(i);
            sum++;
        }
    }

    cout << sum;
}

/*
연결 요소 : 무방향 그래프에서 적어도 한 개 이상의 경로로 연결된 정점들로 구성된 종속 그래프
한 정점을 시작으로 연결된 간선을 쭉 따라 가야 하므로 dfs가 적절
*/