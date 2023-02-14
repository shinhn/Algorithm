#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

int V, E, K;
vector<pair<int, int>> map[20001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 가중치, 노드
int dist[20001]; // 특정 노드까지 가는 최단 거리

void bfs(int start){
    pq.push({0,start});
    dist[start] = 0;

    while(!pq.empty()){
        int cur = pq.top().second;
        int cur_w = pq.top().first;
        pq.pop();

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

    cin >> V >> E >> K;
    for(int i=0;i<E;i++){
        int u,v,w;
        cin >> u >> v >> w;
        map[u].push_back({v,w});
    }

    fill(dist, dist+20001, INT_MAX);
    bfs(K);
    for(int i=1;i<=V;i++){
        if(dist[i] != INT_MAX) cout << dist[i] << '\n';
        else cout << "INF\n";
    }
    
    return 0;
}