#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*
빨간 구슬이 구멍에 빠지면 성공
파란 구슬이 구멍에 빠지면 실패
빨간 구슬과 파란 구슬이 동시에 구멍에 빠져도 실패
빨간 구슬과 파란 구슬은 동시에 같은 칸에 있을 수 없다

빨간 구슬, 파란 구슬이 동시에 한번씩 이동
입력되는 모든 보드의 가장자리에는 모두 '#'
*/

int N, M, sx_r, sy_r, sx_b, sy_b, tx, ty, ans;
char map[11][11];
queue<pair<int, int>> que_r, que_b;
bool visited_r[11][11], visited_b[11][11];
int dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0};

void bfs(pair<int, int> red, pair<int, int> blue){
    que_r.push(red);
    que_b.push(blue);

    visited_r[red.first][red.second] = true;
    visited_b[blue.first][blue.second] = true;

    while(!que_r.empty() || !que_b.empty()){
        pair<int, int> r = que_r.front();
        que_r.pop();
        pair<int, int> b = que_b.front();
        que_b.pop();
        int y_r = r.first, x_r = r.second, y_b = b.first, x_b = b.second;

        ans++;

        cout << "red : " << y_r << ", " << x_r << "\n";
        cout << "blue : " << y_b << ", " << x_b << "\n\n";

        for(int i=0;i<4;i++){
            int ny_r = y_r, nx_r = x_r, ny_b = y_b, nx_b = x_b;

            // 경계까지 이동
            while(map[ny_r + dy[i]][nx_r + dx[i]] != '#'){
                ny_r += dy[i];
                nx_r += dx[i];

                // 성공
                if(map[ny_r][nx_r] == 'O'){
                    // 파란공이 같이 빠지는 경우도 따져줘야 함
                    while(map[ny_b + dy[i]][nx_b + dx[i]] != '#'){
                        ny_b += dy[i];
                        nx_b += dx[i];

                        // 실패
                        if(map[ny_b][nx_b] == 'O'){
                            ans = -1;
                            return;
                        }
                    }
                    return;
                }
            }
            while(map[ny_b + dy[i]][nx_b + dx[i]] != '#'){
                ny_b += dy[i];
                nx_b += dx[i];

                // 실패
                if(map[ny_b][nx_b] == 'O'){
                    ans = -1;
                    return;
                }
            }
            
            // 두 공이 겹칠 경우
            if(ny_r == ny_b && nx_r == nx_b){
                if(i==0){ // 오른쪽으로 이동
                    if(x_r < x_b){ // 원래 더 이전에 위치하던 공을 다시 한칸 뒤로 이동
                        ny_r -= dy[i];
                        nx_r -= dx[i];
                    }
                    else{
                        ny_b -= dy[i];
                        nx_b -= dx[i];
                    }
                }
                if(i==1){ // 위로 이동
                    if(y_b < y_r){
                        ny_r -= dy[i];
                        nx_r -= dx[i];
                    }
                    else{
                        ny_b -= dy[i];
                        nx_b -= dx[i];
                    }
                }
                if(i==2){ // 왼쪽으로 이동
                    if(x_b < x_r){
                        ny_r -= dy[i];
                        nx_r -= dx[i];
                    }
                    else{
                        ny_b -= dy[i];
                        nx_b -= dx[i];
                    }
                }
                if(i==3){ // 아래쪽으로 이동
                    if(y_r < y_b){
                        ny_r -= dy[i];
                        nx_r -= dx[i];
                    }
                    else{
                        ny_b -= dy[i];
                        nx_b -= dx[i];
                    }
                }
            }

            if(!visited_r[ny_r][nx_r]){
                if(i==0 && map[ny_r+1][nx_r] == '#' && map[ny_r][nx_r+1] == '#' && map[ny_r-1][nx_r] == '#') continue; // 오른쪽에서 왔는데 나머지 방향이 다 막힌 경우
                if(i==1 && map[ny_r+1][nx_r] == '#' && map[ny_r][nx_r+1] == '#' && map[ny_r][nx_r-1] == '#') continue;
                if(i==2 && map[ny_r+1][nx_r] == '#' && map[ny_r][nx_r-1] == '#' && map[ny_r-1][nx_r] == '#') continue;
                if(i==3 && map[ny_r-1][nx_r] == '#' && map[ny_r][nx_r+1] == '#' && map[ny_r][nx_r-1] == '#') continue;
                visited_r[ny_r][nx_r] = true;
                que_r.push({ny_r, nx_r});
            }

            if(!visited_r[ny_b][nx_b]){
                if(i==0 && map[ny_b+1][nx_b] == '#' && map[ny_b][nx_b+1] == '#' && map[ny_b-1][nx_b] == '#') continue; // 오른쪽에서 왔는데 나머지 방향이 다 막힌 경우
                if(i==1 && map[ny_b+1][nx_b] == '#' && map[ny_b][nx_b+1] == '#' && map[ny_b][nx_b-1] == '#') continue;
                if(i==2 && map[ny_b+1][nx_b] == '#' && map[ny_b][nx_b-1] == '#' && map[ny_b-1][nx_b] == '#') continue;
                if(i==3 && map[ny_b-1][nx_b] == '#' && map[ny_b][nx_b+1] == '#' && map[ny_b][nx_b-1] == '#') continue;
                visited_b[ny_b][nx_b] = true;
                que_b.push({ny_b, nx_b});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> map[i][j];
            if(map[i][j] == 'B'){ // 파란 구슬 시작점
                sy_b = i;
                sx_b = j;
            }
            if(map[i][j] == 'R'){ // 빨간 구슬 시작점
                sy_r = i;
                sx_r = j;
            }
            if(map[i][j] == 'O'){ // 탈출구
                ty = i;
                tx = j;
            }
        }
    }

    bfs({sy_r, sx_r}, {sy_b, sx_b});

    if(ans <= 10) cout << ans << '\n';
    else cout << "-1\n";

    return 0;
}