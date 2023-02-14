#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

int N, M, X, ans;
int dist[1001];
vector<pair<int, int>> map[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 가중치, 노드

void bfs(int start){
    pq.push({0, start});

    while(!pq.empty()){
        int cur = pq.top().second;
        int cur_w = pq.top().first;
        pq.pop();

        if(dist[cur] < cur_w) continue;

        for(auto i : map[cur]){
            int next = i.first;
            int next_w = i.second;
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

    cin >> N >> M >> X;
    for(int i=0;i<M;i++){
        int a, b, w;
        cin >> a >> b >> w;
        map[a].push_back({b,w});
    }

    for(int i=1;i<=N;i++){
        int total_w = 0;

        // i -> X
        fill(dist, dist+N, INT_MAX);
        bfs(i);
        total_w += dist[X];

        // X -> i
        fill(dist, dist+N, INT_MAX);
        bfs(X);
        total_w += dist[i];


        ans = max(ans, total_w);
    }

    cout << ans << "\n";
    
    return 0;
}