#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;

        int h, w;
        if (N % H != 0)
        {
            w = N / H + 1;
            h = N % H;
        }
        else
        {
            w = N / H;
            h = H;
        }

        if (w < 10)
            cout << h << 0 << w << '\n';
        else
            cout << h << w << '\n';
    }
}