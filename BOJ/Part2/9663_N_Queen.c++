#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int chess[15][15];
int N, cnt = 0;

bool isPossible(int row, int col) // 다른 퀸과 같은 행, 대각선에 있는지 판별
{
    // 열
    int x = row - 1, y = col;
    while (x >= 0)
    {
        if (chess[x][y] == 1)
            return false;
        x--;
    }

    // 위-왼쪽 대각선
    x = row - 1;
    y = col - 1;
    while (x >= 0 && y >= 0)
    {
        if (chess[x][y] == 1)
            return false;
        x--;
        y--;
    }

    // 위-오른쪽 대각선
    x = row - 1;
    y = col + 1;
    while (x >= 0 && y < N)
    {
        if (chess[x][y] == 1)
            return false;
        x--;
        y++;
    }

    return true;
}

void dfs(int row)
{
    if (row == N)
    {          // N개를 모두 채스판 위에 놓았으므로
        cnt++; // 경우의 수를 하나 증가시키고 함수 종료
    }
    else
    {
        for (int col = 0; col < N; col++)
        {
            if (isPossible(row, col) && chess[row][col] == 0)
            {
                chess[row][col] = 1; // 퀸 배치
                dfs(row + 1);        // 가능하면 다음 열로 이동
                chess[row][col] = 0; // 초기화
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    dfs(0);

    cout << cnt;

    return 0;
}