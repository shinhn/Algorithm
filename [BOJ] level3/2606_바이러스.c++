#include <iostream>
#include <queue>

using namespace std;

bool net[101][101] = {false};
bool visited[101] = {false};
int N, T, n1, n2, cnt = 0;
queue<int> que;

void BFS(int n)
{
    visited[n] = true;
    que.push(n);

    while (que.empty() == false)
    {
        int tmp = que.front();
        que.pop();

        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == false && net[i][tmp] == true)
            {
                visited[i] = true;
                que.push(i);
                cnt++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> T;

    while (T > 0)
    {
        T--;

        cin >> n1 >> n2;
        net[n1][n2] = true;
        net[n2][n1] = true;
    }

    BFS(1);
    cout << cnt;
}

/*
단순히 net을 완전탐색하기에는 O(n*n) 시간 복잡도가 큼,
이진탐색을 사용하기에는 데이터가 정렬되어 있지 않으므로 부적절,
다른 탐색 기법 중에 너비우선탐색(BFS)을 사용

너비 우선 탐색 (BFS)
: 루트 노드(혹은 다른 임의의 노드)에서 시작해서 인접한 노드를 먼저 탐색하는 방법

- 시작 정점으로부터 가까운 정점을 먼저 방문하고 멀리 떨어져 있는 정점을 나중에 방문하는 순회 방법이다.
- 즉, 깊게(deep) 탐색하기 전에 넓게(wide) 탐색하는 것이다.
- 사용하는 경우: 두 노드 사이의 최단 경로 혹은 임의의 경로를 찾고 싶을 때 이 방법을 선택한다.
    Ex) 지구상에 존재하는 모든 친구 관계를 그래프로 표현한 후 Ash와 Vanessa 사이에 존재하는 경로를 찾는 경우
        - 깊이 우선 탐색의 경우 - 모든 친구 관계를 다 살펴봐야 할지도 모른다.
        - 너비 우선 탐색의 경우 - Ash와 가까운 관계부터 탐색
- 너비 우선 탐색(BFS)이 깊이 우선 탐색(DFS)보다 좀 더 복잡하다.

특징
- 직관적이지 않은 면이 있다.
- BFS는 시작 노드에서 시작해서 거리에 따라 단계별로 탐색한다고 볼 수 있다.
- BFS는 재귀적으로 동작하지 않는다.
- 이 알고리즘을 구현할 때 가장 큰 차이점은, 그래프 탐색의 경우 어떤 노드를 방문했었는지 여부를 반드시 검사 해야 한다는 것이다.
    -> 이를 검사하지 않을 경우 무한루프에 빠질 위험이 있다.
- BFS는 방문한 노드들을 차례로 저장한 후 꺼낼 수 있는 자료 구조인 큐(Queue)를 사용한다.
    -> 즉, 선입선출(FIFO) 원칙으로 탐색
- 일반적으로 큐를 이용해서 반복적 형태로 구현하는 것이 가장 잘 동작한다.
‘Prim’, ‘Dijkstra’ 알고리즘과 유사하다.

*/