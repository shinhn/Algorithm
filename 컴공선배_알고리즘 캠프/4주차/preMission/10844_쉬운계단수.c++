#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int stair[101][10]; // stair[n][d] : 길이가 n(최대100),마지막 숫자가 d(0~9)인 계단수 개수

int main()
{
    int N, ans = 0;
    cin >> N;

    // 초기값 저장
    stair[1][0] = 0; // 0으로 시작하는 수는 계단수가 아니다.
    for (int i = 1; i <= 9; i++) // 한자리 수일 때는 계단수가 한가지(본인)밖에 없다.
    {
        stair[1][i] = 1;
    }

    for (int n = 2; n <= N; n++)
    {
        for (int d = 0; d <= 9; d++)
        {
            if (d == 0)
                stair[n][d] = stair[n - 1][d + 1] % 1000000000;
            else if (d == 9)
                stair[n][d] = stair[n - 1][d - 1] % 1000000000;
            else
                stair[n][d] = (stair[n - 1][d - 1] + stair[n - 1][d + 1]) % 1000000000;
        }
    }

    for (int d = 0; d <= 9; d++)
    {
        // ans += (stair[N][d] % 1000000000);
        ans  = (ans + stair[N][d]) % 1000000000;
    }

    cout << ans % 1000000000 << "\n";

    return 0;
}