#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
int map[17][17];

void DFS(int y, int x, int dir){ // 1 : 가로, 2 : 세로, 3 : 대각선

    if(y == N && x == N){
        ans ++;
        return;
    }

    if(dir == 1){
        // 가로로 이동
        if(x+1 <= N && map[y][x+1] == 0){
            DFS(y,x+1,1);
        }

        // 대각선으로 이동
        if(x+1 <= N && y+1 <= N && map[y][x+1] == 0 && map[y+1][x+1] == 0 && map[y+1][x] == 0){
            DFS(y+1,x+1,3);
        }
    }
    if(dir == 2){
        // 세로로 이동
        if(y+1 <= N && map[y+1][x] == 0){
            DFS(y+1, x, 2);
        }

        // 대각선으로 이동
        if(x+1 <= N && y+1 <= N && map[y][x+1] == 0 && map[y+1][x+1] == 0 && map[y+1][x] == 0){
            DFS(y+1,x+1,3);
        }
    }
    if(dir == 3){
        // 가로로 이동
        if(x+1 <= N && map[y][x+1] == 0){
            DFS(y,x+1,1);
        }

        // 세로로 이동
        if(y+1 <= N && map[y+1][x] == 0){
            DFS(y+1, x, 2);
        }

        // 대각선으로 이동
        if(x+1 <= N && y+1 <= N && map[y][x+1] == 0 && map[y+1][x+1] == 0 && map[y+1][x] == 0){
            DFS(y+1,x+1,3);
        }
    }
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
        }
    }

    DFS(1,2,1);

    cout << ans << "\n";

    return 0;
}