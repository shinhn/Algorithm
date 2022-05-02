#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*
재귀적으로 상하좌우 다 이동시킨다.
이동시킬때마다 블록의 최댓값을 찾아 갱신한다.
이동한 횟수가 5를 넘으면 리턴
재귀가 전부 끝나고 블록의 최댓값 출력

블록을 이동하는 것은 큐를 사용한다.
2 4 4 0 을왼쪽에서 오른쪽으로 이동시킨다면
(큐) -> 2 4 4 0 -> 모양으로 담고
front부터
0이면 pop
0아니면 그 다음 숫자와 비교한다. 같으면 합쳐서 배열의 오른쪽부터 넣고, 다르면 본인만 넣음 
이러면 먼저 합쳐진 것은 이미 배열에 들어갔기 때문에 중복으로 합쳐질 걱정 없다.
*/

int N, ans=0;

vector<vector<int> > move_block(vector<vector<int> > board, int dir){

    // 왼쪽에서 오른쪽
    if(dir == 1){ 
        for(int i=0;i<N;i++){
            // que에 넣기
            queue<int> que;
            for(int j=N-1;j>=0;j--){
                que.push(board[i][j]);
            }
            // 새로운 배열 채워 넣기
            int k = N-1;
            while(!que.empty()){
                if(que.front() == 0)que.pop();
                else{
                    int num1 = que.front();
                    que.pop();
                    if(!que.empty()){ // num2도 존재할때
                        int num2 = que.front();

                        if(num1 == num2){ // 같으면 합쳐서 배열의 오른쪽부터 넣고
                            board[i][k] = num1+num2;
                            board[i][k-1] = 0;
                            k--;
                            que.pop(); // num2 빼줌
                        }
                        else{ // 다르면 본인만 넣음 
                            board[i][k] = num1;
                            k--;
                        }
                    }
                }
            }
            while(k>=0){
                board[i][k] = 0;
                k--;
            }
        }
    }
    // 오른쪽에서 왼쪽
    if(dir == 2){
        for(int i=0;i<N;i++){
            // que에 넣기
            queue<int> que;
            for(int j=0;j<N;j++){
                que.push(board[i][j]);
            }
            // 새로운 배열 채워 넣기
            int k = 0;
            while(!que.empty()){
                if(que.front() == 0)que.pop();
                else{
                    int num1 = que.front();
                    que.pop();
                    if(!que.empty()){ // num2도 존재할때
                        int num2 = que.front();

                        if(num1 == num2){ // 같으면 합쳐서 배열의 오른쪽부터 넣고
                            board[i][k] = num1+num2;
                            board[i][k+1] = 0;
                            k++;
                            que.pop(); // num2 빼줌
                        }
                        else{ // 다르면 본인만 넣음 
                            board[i][k] = num1;
                            k++;
                        }
                    }
                }
            }
            while(k<N){
                board[i][k] = 0;
                k++;
            }
        }
    }
    // 아래에서 위
    if(dir == 3){
        for(int i=0;i<N;i++){
            // que에 넣기
            queue<int> que;
            for(int j=N-1;j>=0;j--){
                que.push(board[j][i]);
            }
            // 새로운 배열 채워 넣기
            int k = N-1;
            while(!que.empty()){
                if(que.front() == 0)que.pop();
                else{
                    int num1 = que.front();
                    que.pop();
                    if(!que.empty()){ // num2도 존재할때
                        int num2 = que.front();

                        if(num1 == num2){ // 같으면 합쳐서 배열의 오른쪽부터 넣고
                            board[k][i] = num1+num2;
                            board[k-1][i] = 0;
                            k--;
                            que.pop(); // num2 빼줌
                        }
                        else{ // 다르면 본인만 넣음 
                            board[k][i] = num1;
                            k--;
                        }
                    }
                }
            }
            while(k>=0){
                board[i][k] = 0;
                k--;
            }
        }
    }
    // 위에서 아래
    if(dir == 4){
        for(int i=0;i<N;i++){
            // que에 넣기
            queue<int> que;
            for(int j=0;j<N;j++){
                que.push(board[j][i]);
            }
            // 새로운 배열 채워 넣기
            int k = 0;
            while(!que.empty()){
                if(que.front() == 0)que.pop();
                else{
                    int num1 = que.front();
                    que.pop();
                    if(!que.empty()){ // num2도 존재할때
                        int num2 = que.front();

                        if(num1 == num2){ // 같으면 합쳐서 배열의 오른쪽부터 넣고
                            board[k][i] = num1+num2;
                            board[k+1][i] = 0;
                            k++;
                            que.pop(); // num2 빼줌
                        }
                        else{ // 다르면 본인만 넣음 
                            board[k][i] = num1;
                            k++;
                        }
                    }
                }
            }
            while(k<N){
                board[i][k] = 0;
                k++;
            }
        }
    }

    return board;
}

int max_block(vector<vector<int> > board){
    int m=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            m = max(m, board[i][j]);
        }
    }

    return m;
}

void DFS(vector<vector<int> > board, int cnt){
    if(cnt > 5)return;

    // 블록의 최댓값 갱신
    ans = max(ans, max_block(board));

    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //         cout << board[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";

    // 이동
    for(int i=1;i<=4;i++){ // 상하좌우
        vector<vector<int> > new_board = move_block(board, i);
        DFS(new_board, cnt+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int> > board(20, vector<int>(20));

    cin >> N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> board[i][j];
        }
    }
    
    DFS(board, 0);

    cout << ans << "\n";

    return 0;
}