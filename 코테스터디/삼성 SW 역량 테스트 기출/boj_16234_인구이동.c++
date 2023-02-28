#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, L, R, day, group_size, people;
int map[51][51];
bool visited[51][51];
queue<pair<int, int>> que, country;
int dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0};

bool is_done(){
    int before = -1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(before == -1) before = map[i][j];
            else{
                if(abs(map[i][j] - before) >= L && abs(map[i][j] - before) <= R) return false;
                else before = map[i][j];
            }
        }
    }

    return true;
}

void bfs(int sy, int sx){
    que.push({sy,sx});
    country.push({sy,sx});
    visited[sy][sx] = true;
    group_size ++;
    people += map[sy][sx];

    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();

        for(int i=0;i<4;i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(visited[ny][nx]) continue;
            if(ny<1 || ny>N || nx<1 || nx>N) continue;
            if(abs(map[ny][nx] - map[y][x]) >= L && abs(map[ny][nx] - map[y][x]) <= R){
                que.push({ny,nx});
                country.push({ny,nx});
                group_size ++;
                people += map[ny][nx];
                visited[ny][nx] = true;
            }
        }
    }
}

void renew_map(){
    while(!country.empty()){
        int y = country.front().first;
        int x = country.front().second;
        country.pop();

        map[y][x] = people/group_size;
    }
}

void print(){
    cout << "=============\n";
    cout << "day : " << day << '\n';
    cout << "people : " << people << '\n';
    cout << "group_size : " << group_size << '\n';
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> L >> R;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> map[i][j];
        }
    }

    while(!is_done()){ // 인구 이동을 해야 하는지 판별
        day++;

        // 초기화
        fill(&visited[0][0], &visited[51][51], false);

        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(!visited[i][j]){
                    // 초기화
                    group_size = 0;
                    people = 0;
                    
                    bfs(i,j);
                    renew_map();
                    //print();
                }
            }
        }
    }

    cout << day << '\n';

    return 0;
}