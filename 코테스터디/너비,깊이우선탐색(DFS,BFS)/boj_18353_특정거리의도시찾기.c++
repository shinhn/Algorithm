#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

/*
다익스트라 알고리즘(bfs) : 그래프의 한 지점에서 각 노드까지의 최단거리를 계산해주는 알고리즘
*/

int N, M, K, X, cnt;
vector<pair<int, int>> road[300001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // 도시 가중치, 도시 번호
vector<int> dist(300001);

void bfs(int s){
    pq.push({0,s});
    dist[s] = 0;

    while(!pq.empty()){
        int cur = pq.top().second;
        int cost = pq.top().first;
        pq.pop();

        if(cost > dist[cur]) continue; // 현재 도시까지의 거리가 이전에 체크한 현재 도시까지의 거리보다 클 경우 -> 돌아가는게 빠르므로 패스

        for(int i=0;i<road[cur].size();i++){
            int next = road[cur][i].second;
            int next_cost = road[cur][i].first;

            if(cost + next_cost < dist[next]){ // 최단거리일 경우
                dist[next] = cost + next_cost;
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

    cin >> N >> M >> K >> X;

    fill(dist.begin(), dist.end(), INT_MAX);

    for(int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        road[a].push_back({1,b});
    }

    bfs(X);

    int flag = 0;
    for(int i=1;i<=N;i++){
        if(dist[i] == K){
            cout << i << "\n";
            flag = 1;
        }
    }

    if(flag == 0) cout << "-1\n"; // 최단 거리가 K인 도시가 하나도 존재하지 않을 경우

    return 0;
}