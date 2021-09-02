#include <iostream>
#include <cmath>

using namespace std;

int N, r, c, S, cnt = 0;
int direcion[4][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};

void f_search(int x, int y, int S)
{
    if (S == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            if (x + direcion[i][1] == c && y + direcion[i][0] == r)
            {
                cout << cnt;
            }
            cnt++;
        }
    }
    else
    {
        /*
        f_search(x, y, S / 2);
        f_search(x + S / 2, y, S / 2);
        f_search(x, y + S / 2, S / 2);
        f_search(x + S / 2, y + S / 2, S / 2);

        조건문 없이 모두 재귀하여 전수조사 했을 때 시간초과 발생
        -> r,c의 위치를 알기 때문에 4사분면을 모두 조사할 필요 없이 cnt만 더해주고 건너 뛸 수 있음
        */
        if (r < y + S / 2 && c < x + S / 2)
            f_search(x, y, S / 2);
        else if (r < y + S / 2 && c >= x + S / 2)
        {
            cnt += pow(S / 2, 2);
            f_search(x + S / 2, y, S / 2);
        }
        else if (r >= y + S / 2 && c < x + S / 2)
        {
            cnt += 2 * pow(S / 2, 2);
            f_search(x, y + S / 2, S / 2);
        }
        else
        {
            cnt += 3 * pow(S / 2, 2);
            f_search(x + S / 2, y + S / 2, S / 2);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> r >> c;
    S = pow(2, N);
    f_search(0, 0, S);
}
// 분할정복 - 2630 색종이 만들기 문제와 유사