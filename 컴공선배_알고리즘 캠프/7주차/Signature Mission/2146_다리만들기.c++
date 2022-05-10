#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

struct node{
    int y;
    int x;
    int d;
};

int N, cnt, ans=999, island;

int map[100][100];
int map2[100][100]; // 섬 번호 표시

queue<pair<int, int> > que;
queue<node> que2;

bool visited[100][100];

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

void BFS_island(int Y, int X){
    que.push({Y,X});
    visited[Y][X] = true;
    map2[Y][X] = cnt;

    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();

        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
            if(visited[ny][nx]) continue;

            if(map[ny][nx] == 1){
                visited[ny][nx] = true;
                map2[ny][nx] = cnt;
                que.push({ny,nx});
            }
        }
    }
}

void BFS_bridge(int Y, int X){

    island = map2[Y][X];
    memset(visited, 0, sizeof(visited));

    node ns;
    ns.y = Y;
    ns.x = X;
    ns.d = 0;
    que2.push(ns);
    visited[Y][X] = true;
    
    while(!que2.empty()){
        int y = que2.front().y;
        int x = que2.front().x;
        int d = que2.front().d;
        que2.pop();

        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
            if(visited[ny][nx]) continue;

            if(map2[ny][nx] == 0){ // 바다인 경우
                visited[ny][nx] = true;
                node nn;
                nn.y = ny;
                nn.x = nx;
                nn.d = d+1;
                que2.push(nn);
            }
            else{ // 육지인 경우
                if(map2[ny][nx] != island){ // 다른 섬인 경우
                    ans = min(ans, d);
                }
            }  
        }
    }
}

bool is_near_sea(int Y,int X){
    for(int i=0;i<4;i++){
        int ny = Y + dy[i];
        int nx = X + dx[i];

        if(ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
        if(map[ny][nx] == 0) return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> map[i][j];
        }
    }

    // 섬 번호 표시
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(!visited[i][j] && map[i][j]==1){
                cnt ++;
                BFS_island(i,j);
            }
        }
    }
    // 확인
    // cout << "\n";
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         cout << map2[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // 다리 탐색
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(map2[i][j]!=0 && is_near_sea(i,j)){
                BFS_bridge(i,j);
            }
        }
    }

    cout << ans << "\n";
}