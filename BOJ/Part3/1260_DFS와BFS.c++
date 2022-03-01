#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int N, M, V;

int graph[MAX][MAX];
int visited[MAX];
queue<int> q;

void DFS(int v){
    cout << v << " ";
    visited[v] = 1;

    for(int i=1;i<=N;i++)
    {
        if (graph[v][i] == 1 && visited [i] == 0)
        {
            DFS(i);
        }
    }
}

void BFS(int v)
{
    cout << v << " ";
    visited[v] = 1;
    q.push(v);

    while(!q.empty())
    {
        v = q.front();
        q.pop();

        for(int i=1;i<=N;i++)
        {
            if(graph[v][i]==1 && visited[i]==0)
            {
                cout << i << " ";
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> V;

    for(int i=0;i<M;i++)
    {
        int a, b; // 두 정점
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1; // 양방향 간선
    }

    DFS(V);
    cout << "\n";
    for(int i=1;i<=N;i++) // 방문 여부 초기화
    {
        visited[i] = 0;
    }

    BFS(V);


    return 0;
}