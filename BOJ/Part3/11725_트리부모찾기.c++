#include <iostream>
#include <vector>
#define MAX 100001

using namespace std;

vector<int> graph[MAX];
int parent[MAX];
int visited[MAX];

void dfs(int node)
{
    visited[node] = 1;

    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];
        if (visited[next] == 0)
        {
            parent[next] = node;
            dfs(next);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N-1; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;

        // 양방항
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }

    dfs(1);

    for (int i = 2; i <= N; i++) // 2노드부터 순서대로 출력
    {
        cout << parent[i] << "\n";
    }

    return 0;
}