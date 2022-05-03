#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

/*
뱀
머리가 이동할 때 사과가 없으면 이동한 만큼 꼬리를 짤라야 하므로 deque 사용
*/

deque<pair<int, int> > snake; // 뱀 (x,y)

int dir;
int dx[4] = {1, 0, -1, 0}; // dir 0:오른쪽, 1:위쪽, 2:왼쪽, 3:아래쪽
int dy[4] = {0, -1, 0, 1};

int N, K, L; // 보드의 크기, 사과의 갯수, 방향 변환 횟수

int board[102][102];
int timer; // 한칸 이동할 때마다 시간 1씩 증가

vector<pair<int, char> > turnInfo; // 방향 변환 정보 저장 
int idx; // 방향 변환해야 하는지 체크용

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    // 사과 위치 입력
    cin >> K;
    for(int i=0;i<K;i++){ 
        int x,y;
        cin >> y >> x;
        board[y][x] = 1;
    }

    // 방향 변환 정보 입력
    cin >> L;
    for(int i=0;i<L;i++){
        int sec;
        char dir;
        cin >> sec >> dir;
        turnInfo.push_back(make_pair(sec,dir));
    }

    snake.push_front(make_pair(1,1)); // 머리추가
    board[1][1] = 2; // 뱀이 위치한 곳 표시 (2)
    
    // 이동 시작
    while(1){

        // cout << dir << "\n";
        // for(int i=1;i<=N;i++){
        //     for(int j=1;j<=N;j++){
        //         cout << board[i][j];
        //     }
        //     cout << "\n";
        // }

        timer ++;

        pair<int, int> head = snake.front();
        int nx = head.first + dx[dir];
        int ny = head.second + dy[dir];

        // 벽 또는 자기자신의 몸과 부딪히면 게임 끝
        if(ny > N || nx > N || ny < 1 || nx < 1 || board[ny][nx]==2) break;

        // 이동한 위치에 사과가 있을 경우
        if(board[ny][nx]==1){ 
            // 꼬리는 움직이지 않는다.
            // 머리만 이동
            snake.push_front(make_pair(nx,ny));
            board[ny][nx] = 2;
        }

        // 이동한 위치에 사과가 없을 경우
        if(board[ny][nx]==0){ 
            // 머리 이동
            snake.push_front(make_pair(nx,ny));
            board[ny][nx] = 2;
            // 꼬리 하나 자르기
            pair<int, int> tail = snake.back();
            board[tail.second][tail.first] = 0;
            snake.pop_back();
        }
        
        if(timer == turnInfo[idx].first){
            if(turnInfo[idx].second == 'L') dir = (dir+1) % 4; // 왼쪽으로 회전
            if(turnInfo[idx].second == 'D') dir = (dir+3) % 4; // 오른쪽으로 회전
            idx++;
        }
    }

    cout << timer << "\n";


    return 0;
}