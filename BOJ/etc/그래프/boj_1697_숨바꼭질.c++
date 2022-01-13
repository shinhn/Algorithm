#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

/*
<문제>
수빈이가 이동할 수 있는 경우의 수는 3가지

X
-> X-1
-> X+1
-> X*2

<접근>
이동할 수 있는 경우에 따라 bfs를 통해 최단거리를 구하면 될듯
참고로 최단거리 문제에서는 visited를 따로 기록할 필요 없음. -> dist가 측정된적 없다면 방문한적이 없는 것이기 때문

<에러>
dist 벡터를 처음에 초기화 할때 크기를 100001로 해줬었는데 런타임 에러 (OutOfBounds) 가 나서
200001 ( = max(n) * 2)로 넓혀 줬더니 해결

<시간 복잡도>
https://velog.io/@kjh107704/%EA%B7%B8%EB%9E%98%ED%94%84-BFS%EC%99%80-DFS
O(정점 개수 + 간선") = O(2n + 3n) (3가지 이동 경우)
*/

int N, K;                     // N : 수빈 위치(점) , K : 동생 위치(점)
vector<int> dist(200001, -1); // 시작 node에서 해당 node까지의 거리, 문제에서는 1초에 한번 다음 노드로 이동하므로 걸린 시간(초)
queue<int> que;

void bfs()
{
    while (!que.empty())
    {
        int cur = que.front();
        que.pop();

        if (cur == K)
        {
            cout << dist[cur];
            break;
        }

        if (dist[cur - 1] == -1 && cur - 1 >= 0) // 방문하지 않았고 (== dist가 측정된적 없었고) 위치 범위가 0 ~ 100,000
        {
            dist[cur - 1] = dist[cur] + 1;
            que.push(cur - 1);
        }
        if (dist[cur + 1] == -1 && cur + 1 <= 100000)
        {
            dist[cur + 1] = dist[cur] + 1;
            que.push(cur + 1);
        }
        if (dist[cur * 2] == -1 && cur * 2 <= 100000)
        {
            dist[cur * 2] = dist[cur] + 1;
            que.push(cur * 2);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    dist[N] = 0;
    que.push(N);

    bfs();

    return 0;
}
