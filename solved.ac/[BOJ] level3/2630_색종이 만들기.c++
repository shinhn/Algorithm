// 같은 색으로만 이루어져 있는지 탐색하고 다른 색이 껴있다면 종이를 잘라 다시 같은 과정을 반복해야 하므로 재귀 사용

#include <iostream>
#include <algorithm>

using namespace std;

int N, blue_n = 0, white_n = 0;
bool paper[128][128];

bool samecolor(int x, int y, int wid) // x : 탐색 시작 x좌표, y : 탐색 시작 y좌표, wid : 넓이
{
    bool color = paper[x][y];

    for (int i = x; i < x + wid; i++)
    {
        for (int j = y; j < y + wid; j++)
        {
            if (color != paper[i][j])
                return false;
        }
    }
    return true;
}

void cut(int x, int y, int N)
{
    if (samecolor(x, y, N) == true)
    {
        if (paper[x][y] == 1)
            blue_n++;
        else
            white_n++;
    }
    else
    {
        cut(x, y, N / 2);
        cut(x + N / 2, y, N / 2);
        cut(x, y + N / 2, N / 2);
        cut(x + N / 2, y + N / 2, N / 2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> paper[i][j];
        }
    }

    cut(0, 0, N);

    cout << white_n << '\n'
         << blue_n;
}
