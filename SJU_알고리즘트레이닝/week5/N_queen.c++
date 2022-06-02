#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, cnt;
bool visited[15][15];

bool is_possible(int row, int col){ // 현재 칸보다 위 칸들만 확인하면 됨
    // 위 (열)
    for(int y=row-1;y>=0;y--){
        if(visited[y][col]) return false;
    }

    // 왼쪽 위 대각선
    for(int y=row-1, x=col-1;y>=0 && x>=0;y--, x--){
        if(visited[y][x]) return false;
    }

    // 오른쪽 위 대각선
    for(int y=row-1, x=col+1;y>=0 && x<N;y--, x++){
        if(visited[y][x]) return false;
    }

    return true;
}

void dfs(int row){
    if(row == N){
        cnt++;
        return;
    }

    for(int col=0;col<N;col++){
        if(visited[row][col]) continue;
        if(!is_possible(row, col)) continue;

        visited[row][col] = true;
        dfs(row + 1);
        visited[row][col] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dfs(0);

    cout << cnt << "\n";

    return 0;
}