#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int N, M, year;
int map[300][300];
int new_map[300][300];
bool visited[300][300];

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

void melt(){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(map[i][j] == 0) continue;

            new_map[i][j] = map[i][j];

            int cnt = 0;
            if(i-1>=0 && map[i-1][j] == 0) cnt ++;
            if(j-1>=0 && map[i][j-1] == 0) cnt ++;
            if(i+1<=N && map[i+1][j] == 0) cnt ++;
            if(j+1<=M && map[i][j+1] == 0) cnt ++;
            new_map[i][j] -= cnt;

            if(new_map[i][j] < 0) new_map[i][j] = 0;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            map[i][j] = new_map[i][j];
        }
    }
}

void DFS(int y, int x){
    visited[y][x] = true;

    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || ny >= N || nx < 0 || nx >= M) continue;

        if(!visited[ny][nx] && map[ny][nx]>0) DFS(ny, nx);
    }
}

bool is_two(){
    int cnt = 0;
    memset(visited, false, sizeof(visited));

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(map[i][j] > 0 && !visited[i][j]){
                cnt ++;
                if(cnt == 2) return true;
                DFS(i, j);
            }
        }
    }

    return false;
}

bool all_melt(){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(map[i][j] != 0){
                return false;
            }
        }
    }

    return true;
}

void print_map(){
    cout << "\n";
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
        }
    }

    while(1){
        year++;

        melt();

        // print_map();

        if(is_two()){
            cout << year << "\n";
            break;
        }
        if(all_melt()){
            cout << 0 << "\n";
            break;
        }
    }

    return 0;
}