#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
트리의 루트 : 1

각 노드의 부모 노드를 구함 -> 모든 노드 탐색 -> dfs(재귀 or 스택), bfs(큐)

문제유형
1) 그래프의 모든 정점을 방문하는 것이 주요한 문제 (dfs && bfs)

단순히 모든 정점을 방문하는 것이 중요한 문제의 경우 DFS, BFS 두 가지 방법 중 어느 것을 사용하셔도 상관없습니다.
둘 중 편한 것을 사용하시면 됩니다.

2) 경로의 특징을 저장해둬야 하는 문제 (dfs)

예를 들면 각 정점에 숫자가 적혀있고 a부터 b까지 가는 경로를 구하는데 경로에 같은 숫자가 있으면 안 된다는 문제 등, 각각의 경로마다 특징을 저장해둬야 할 때는 DFS를 사용합니다. (BFS는 경로의 특징을 가지지 못합니다)

3) 최단거리 구해야 하는 문제 (bfs)

미로 찾기 등 최단거리를 구해야 할 경우, BFS가 유리합니다.
왜냐하면 깊이 우선 탐색으로 경로를 검색할 경우 처음으로 발견되는 해답이 최단거리가 아닐 수 있지만, 
너비 우선 탐색으로 현재 노드에서 가까운 곳부터 찾기 때문에경로를 탐색 시 먼저 찾아지는 해답이 곧 최단거리기 때문입니다.

이밖에도 
- 검색 대상 그래프가 정말 크다면 DFS를 고려
- 검색대상의 규모가 크지 않고, 검색 시작 지점으로부터 원하는 대상이 별로 멀지 않다면 BFS

출처: https://devuna.tistory.com/32 [튜나 개발일기]


dfs, bfs 시간복잡도 : O(간선의 수 + 정점의 수)
*/

int N; // 노드의 개수
vector<int> tree[100001];
bool visited[100001] = {false};
int parent[100001];

void dfs(int node)
{
    visited[node] = true; // 방문 표시

    for (int i = 0; i < tree[node].size(); i++)
    {
        int target = tree[node][i];

        if (!visited[target])
        {
            // 입력할때 부모 -> 자식 순으로 입력하므로, 인자(node -> tree[node][i])가 부모노드이다.
            parent[target] = node;

            // 재귀를 통한 dfs 탐색
            dfs(target);
        }
    }
}

queue<int> que;
void bfs(int node)
{
    que.push(node);
    visited[node] = true;

    while (!que.empty())
    {
        int cur = que.front();
        que.pop();

        for (int i = 0; i < tree[cur].size(); i++)
        {
            int target = tree[cur][i];

            if (!visited[target])
            {
                parent[target] = cur;

                que.push(target);
                visited[target] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N - 1; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;

        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }

    // dfs(1);

    bfs(1);

    // 부모 노드 번호를 2번 노드부터 순서대로 출력
    for (int i = 2; i <= N; i++)
    {
        cout << parent[i] << '\n';
    }

    return 0;
}