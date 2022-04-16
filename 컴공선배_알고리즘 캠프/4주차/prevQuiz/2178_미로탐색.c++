#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N, M;
string map[102];
queue<pair<int, int>> que;
int dist[102][102];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void BFS(){
    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        
        if(y == N-1 && x == M-1){
            cout << dist[y][x] << "\n";
            return;
        }
        
        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
            if(map[ny][nx] == '0') continue;
            if(dist[ny][nx] != 0) continue;
            
            que.push({ny,nx});
            dist[ny][nx] = dist[y][x] + 1;
        }
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> M;
    
    for(int i=0;i<N;i++){
        cin >> map[i];
    }
    
    que.push({0,0});
    dist[0][0] = 1;
    
    BFS();

    return 0;
}