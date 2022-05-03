#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int R, C, M; // 격자판의 크기 R, C / 상어의 수 M

struct shark
{
    int y, x;
    int s, d, z;  // s 속력, d 이동 방향, z 크기
    bool catched; // 잡혔는지 안잡혔는지 확인
};
shark Sharks[10001];

int board[101][101];

// (0 그냥 빈 값), 1 위, 2 아래, 3 오른쪽, 4 왼쪽
int dx[5] = {0, 0, 0, 1, -1};
int dy[5] = {0, -1, 1, 0, 0};

int ans;

void print_board(){
    cout << "\n";
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> Sharks[i].y >> Sharks[i].x >> Sharks[i].s >> Sharks[i].d >> Sharks[i].z;
        board[Sharks[i].y][Sharks[i].x] = i;
    }

    // 1. 낚시왕이 오른쪽으로 한 칸 이동한다.
    for (int people = 1; people <= C; people++)
    {   
        // 2. 낚시왕이 있는 열에 있는 상어 중에서 땅과 제일 가까운 상어를 잡는다.
        bool flag = false;
        for (int i = 1; i <= R; i++)
        {
            for(int j=1;j<=M;j++){
                if (Sharks[j].catched == true)
                    continue; // 이미 집힌 상어는 없는 취급
                if(Sharks[j].y == i && Sharks[j].x == people){
                    ans += Sharks[j].z;
                    board[i][people] = 0;
                    Sharks[j].catched = true;
                    flag = true;
                    break;
                }
            }
            if(flag == true) break;
        }

        // 3. 상어가 이동한다.
        for (int i = 1; i <= M; i++)
        {
            if (Sharks[i].catched == true)
                continue; // 이미 집힌 상어는 없는 취급

            board[Sharks[i].y][Sharks[i].x] = 0;

            int ny = Sharks[i].y;
            int nx = Sharks[i].x;

            for (int j = 1; j <= Sharks[i].s; j++)
            {
                if (ny + dy[Sharks[i].d] > R || nx + dx[Sharks[i].d] > C || ny + dy[Sharks[i].d] < 1 || nx + dx[Sharks[i].d] < 1)
                { // 벽에 부딪히면 반대방향으로 전환
                    if (Sharks[i].d == 1)
                        Sharks[i].d = 2;
                    else if (Sharks[i].d == 2)
                        Sharks[i].d = 1;
                    else if (Sharks[i].d == 3)
                        Sharks[i].d = 4;
                    else
                        Sharks[i].d = 3;
                }

                ny += dy[Sharks[i].d];
                nx += dx[Sharks[i].d];
            }

            Sharks[i].y = ny;
            Sharks[i].x = nx;

            board[Sharks[i].y][Sharks[i].x] = i;
        }

        // 큰게 작은거 잡아먹음
        for (int i = 1; i <= M; i++)
        {   
            if (Sharks[i].catched == true)
                continue; // 이미 집힌 상어는 없는 취급
            for (int j = i+1; j <= M; j++){
                if (Sharks[j].catched == true)
                    continue; // 이미 집힌 상어는 없는 취급
                if (Sharks[i].y == Sharks[j].y && Sharks[i].x == Sharks[j].x)
                {
                    if (Sharks[i].z > Sharks[j].z)
                    {
                        Sharks[j].catched = true;
                        board[Sharks[i].y][Sharks[i].x] = i;
                    }
                    else
                    {
                        Sharks[i].catched = true;
                        board[Sharks[j].y][Sharks[j].x] = j;
                    }
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}