#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, ans;
int map[17][17];

void DFS(int y, int x, int dir){ // dir : 가로(0), 세로(1), 대각선(2)
    if(y == N && x == N){
        ans ++;
        return;
    }

    if(dir == 0){ // 가로일 때
        // 가로로 보내기
        if(map[y][x+1] == 0 && x+1<=N) DFS(y, x+1, 0);
        // 대각선으로 보내기
        if(map[y][x+1] == 0 && map[y+1][x+1] == 0 && map[y+1][x] == 0 && x+1<=N && y+1<=N) DFS(y+1, x+1, 2);
    }
    if(dir == 1){ // 세로일 때
        // 세로로 보내기
        if(map[y+1][x] == 0 && y+1<=N) DFS(y+1, x, 1);
        // 대각선으로 보내기
        if(map[y][x+1] == 0 && map[y+1][x+1] == 0 && map[y+1][x] == 0 && x+1<=N && y+1<=N) DFS(y+1, x+1, 2);
    }
    if(dir == 2){ // 대각선일 때
        // 가로로 보내기
        if(map[y][x+1] == 0 && x+1<=N) DFS(y, x+1, 0);
        // 세로로 보내기
        if(map[y+1][x] == 0 && y+1<=N) DFS(y+1, x, 1);
        // 대각선으로 보내기
        if(map[y][x+1] == 0 && map[y+1][x+1] == 0 && map[y+1][x] == 0 && x+1<=N && y+1<=N) DFS(y+1, x+1, 2);
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

    DFS(1,2,0); // 가장 처음에 파이프는 (1, 1)와 (1, 2)를 차지하고 있고, 방향은 가로

    cout << ans << "\n";

    return 0;
}