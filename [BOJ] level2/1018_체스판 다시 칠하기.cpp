#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    char user[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> user[i][j];
        }
    }

    char ans1[8][8] = {{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

    char ans2[8][8] = {{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                       {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                       {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};

    int min_sqr = 64;
    for (int i = 0; i <= M - 8; i++)
    {
        for (int j = 0; j <= N - 8; j++)
        {
            int cnt1 = 0, cnt2 = 0;

            for (int i2 = 0; i2 < 8; i2++)
            {
                for (int j2 = 0; j2 < 8; j2++)
                {
                    if (user[i + i2][j + j2] != ans1[i2][j2])
                        cnt1++;
                    if (user[i + i2][j + j2] != ans2[i2][j2])
                        cnt2++;
                }
            }

            min_sqr = min(min_sqr, min(cnt1, cnt2));
        }
    }

    cout << min_sqr;
}