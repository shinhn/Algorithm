#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int map[21][21];
int N, by, bx, size_b = 2, level, ans;
vector<pair<int, int>> can_eat;
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int bfs(int type, int ty, int tx){ // type 1 : 최단거리 구하는 bfs, type 2 : sort 용 bfs
    queue<pair<int, int>> que;
    que.push({by,bx});

    bool visited[21][21];
    fill(&visited[0][0], &visited[20][21], false);
    visited[by][bx] = true;
    
    int dist[21][21];
    fill(&dist[0][0], &dist[20][21], 0);

    while(!que.empty()){
        int y = que.front().first;
        int x = que.front().second;
        que.pop();

        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 1 || ny > N || nx < 1 || nx > N) continue;
            if(map[ny][nx] > size_b) continue;
            if(visited[ny][nx]) continue;
            if(map[ny][nx] < size_b && ny == ty && nx == tx){
                dist[ny][nx] = dist[y][x] + 1;
                if(type == 1) ans += dist[ny][nx];
                return dist[ny][nx];
            }
            
            visited[ny][nx] = true;
            que.push({ny,nx});
            dist[ny][nx] = dist[y][x] + 1;
        }
    }

    return 0;
}

void cnt_can_eat(){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(map[i][j] != 0 && map[i][j] < size_b) {
                can_eat.push_back({i,j});
            }
        }
    }
}

bool cmp(pair<int, int> p1, pair<int, int> p2){ // map 값 같을 경우 vector sort 기준 추가해야 할듯
    int dist1 = bfs(2, p1.first, p1.second);
    int dist2 = bfs(2, p2.first, p2.second);

    if(dist1 < dist2) return true;
    else if(dist1 > dist2) return false;
    else{
        if(p1.first < p2.first) return true;
        else if(p1.first > p2.first) return false;
        else{
            if(p1.second < p2.second) return true;
            else return false;
        }
    }
}

void print(){
    cout << by << ", " << bx << "\n";
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
    cout << ans << "\n\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin >> map[i][j];
            if(map[i][j] == 9){
                by = i;
                bx = j;
                map[i][j] = 0;
            }
        }
    }

    //print();

    while(1){
        can_eat.clear();
        cnt_can_eat();

        if(can_eat.size() == 0) break; 
        else{ // 먹으러 이동

            if(can_eat.size() == 1){
                bfs(1,can_eat[0].first, can_eat[0].second);
            }
            else{
                sort(can_eat.begin(), can_eat.end(), cmp);
                bfs(1,can_eat[0].first, can_eat[0].second);
            }

            // for(int i=0;i<can_eat.size();i++){
            //     cout << "(" << can_eat[i].first << ", " << can_eat[i].second << ") ";
            // }
            // cout << '\n';

            int ty = can_eat[0].first;
            int tx = can_eat[0].second;
            map[ty][tx] = 0;
            
            // 이동
            map[by][bx] = 0;
            by = ty;
            bx = tx;

            level ++;
            if(level == size_b){
                size_b++;
                level = 0;
            }
        }

        //print();
    }

    cout << ans << '\n';
    

    return 0;
}