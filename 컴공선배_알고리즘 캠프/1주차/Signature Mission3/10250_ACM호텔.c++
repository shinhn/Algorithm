#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int H, W, N, h = 0, w = 0;
        cin >> H >> W >> N;

        if (N <= H)
        {
            w = 1;
            h = N;
        }
        else
        {
            if (N % H != 0)
            {
                w = N / H + 1;
                h = N % H;
            }
            else // 맨 꼭대기 층일 경우
            {
                w = N / H;
                h = H;
            }
        }

        if (w < 10)
        {
            cout << h << '0' << w << "\n";
        }
        else
        {
            cout << h << w << "\n";
        }
    }

    return 0;
}