#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

int N, M, A, B;
vector<pair<int, int>> map[100001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 가중치, 노드
int dist[1001]; // 특정 노드까지의 최소거리

void bfs(int start){
    pq.push({0,start});
    dist[start] = 0;

    while(!pq.empty()){
        int cur = pq.top().second;
        int cur_w = pq.top().first;
        pq.pop();

        if(cur_w > dist[cur]) continue; // 기존에 구한 경로가 더 짧을 경우, 새로운 경로를 가볼 필요가 없음

        for(int i=0;i<map[cur].size();i++){
            int next = map[cur][i].first;
            int next_w = map[cur][i].second;

            if(cur_w + next_w < dist[next]){
                dist[next] = cur_w + next_w;
                pq.push({dist[next], next});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<M;i++){
        int u,v,w;
        cin >> u >> v >> w;
        map[u].push_back({v,w});
    }

    cin >> A >> B;

    fill(dist, dist+1001, INT_MAX);
    bfs(A);
    cout << dist[B] << '\n';
    
    return 0;
}