#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

char board[11][11];
int N, M;
int start_Ry,start_Rx,start_By,start_Bx; // R 와 B의 시작 위치
queue< vector<int> > que;
bool visited[11][11][11][11];

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void BFS(int Ry, int Rx, int By, int Bx){
    vector<int> position;
    position.push_back(Ry);
    position.push_back(Rx);
    position.push_back(By);
    position.push_back(Bx);
    position.push_back(0); // 처음 이동횟수는 0
    que.push(position);

    while(!que.empty()){
        vector<int> pos = que.front();
        int cnt = pos[4];
        que.pop();

        visited[pos[0]][pos[1]][pos[2]][pos[3]] = true;

        for(int i=0;i<4;i++){
            int nRy = pos[0];
            int nRx = pos[1];
            int nBy = pos[2];
            int nBx = pos[3];

            bool isR0 = false; // 0에 도착했는지 안했는지
            bool isB0 = false;      

            while(board[nRy + dy[i]][nRx + dx[i]]!='#'){
                nRy += dy[i];
                nRx += dx[i];

                if(board[nRy][nRx] == 'O'){
                    isR0 = true;
                    break;
                }
            }

            while(board[nBy + dy[i]][nBx + dx[i]]!='#'){
                nBy += dy[i];
                nBx += dx[i];

                if(board[nBy][nBx] == 'O'){
                    isB0 = true;
                    break;
                }
            }
            
            if(isB0 == true) continue; // B가 들어가면 실패이긴 하지만 다른 방향들도 시도해 봐야 하기 때문에 종료하지 않고 넘김
            // 아래는 전부 B 못들어감 (isB0 == false)

            // R 들어감, B 못들어감 -> 성공
            if(isR0 == true){
                cnt ++;
                if(cnt <= 10){
                    cout << cnt << "\n";
                    return;
                }
                else{ // 10번 넘으면 실패
                    cout << "-1" << "\n";
                    return;
                }
            }

            // R 못들어감, B 못들어감 -> 계속 진행
            if(isR0 == false){
                if(nRy == nBy && nRx == nBx){ // 공이 겹칠 경우, 먼저 도착한 공이 자리를 차지한다.
                    int dist_R = abs(pos[0] - nRy) + abs(pos[1] - nRx);
                    int dist_B = abs(pos[2] - nBy) + abs(pos[3] - nBx);

                    if(dist_R < dist_B){ // 늦게 도착한 공은 한칸 전으로 이동
                        nBy -= dy[i];
                        nBx -= dx[i];
                    }
                    if(dist_R > dist_B){
                        nRy -= dy[i];
                        nRx -= dx[i];
                    }
                }
                if(!visited[nRy][nRx][nBy][nBx]){
                    vector<int> npos;
                    npos.push_back(nRy);
                    npos.push_back(nRx);
                    npos.push_back(nBy);
                    npos.push_back(nBx);
                    npos.push_back(cnt+1);

                    que.push(npos);
                }
            }
        }
    }

    // while(!que.empty()) 안에서 함수가 종료되지 않았다는 것은 que안에 좌표가 남았다는 것인데
    // 남은 이유는 if(isB0 == true) continue 으로 그냥 넘겼기 때문에 B가 0일때(실패)가 있었다는 것
    cout << "-1" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin >> board[i][j];
            if(board[i][j]=='R'){
                start_Ry = i;
                start_Rx = j;
            }
            if(board[i][j]=='B'){
                start_By = i;
                start_Bx = j;
            }
        }
    }

    BFS(start_Ry,start_Rx,start_By,start_Bx);
    

    return 0;
}