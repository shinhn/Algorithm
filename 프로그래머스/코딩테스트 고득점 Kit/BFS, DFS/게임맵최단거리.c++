#include<vector>
#include<iostream>
#include<queue>

using namespace std;

bool visited[101][101];
int dist[101][101];
queue<pair<int, int>> que;
pair<int, int> user, target;
int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

int bfs(pair<int, int> cur, vector<vector<int> > maps){
    que.push(cur);
    visited[cur.first][cur.second] = true;
    dist[cur.first][cur.second] = 1;
    
    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        
        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            // 허용되지 않는 경우
            if(ny > target.first || ny < 0 || nx > target.second || nx < 0) continue;
            if(visited[ny][nx]) continue;
            if(maps[ny][nx] == 0) continue;
            
            // 상대방 진영 도달
            if(ny == target.first && nx == target.second) return dist[y][x] + 1;
            
            visited[ny][nx] = true;
            dist[ny][nx] = dist[y][x] + 1;
            que.push({ny,nx});
        }
    }
    
    // 상대 팀 진영에 도착할 수 없는 경우
    return -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    user = {0,0};
    target = {maps.size()-1, maps[maps.size()-1].size()-1};
    
    answer = bfs(user, maps);
    
    return answer;
}