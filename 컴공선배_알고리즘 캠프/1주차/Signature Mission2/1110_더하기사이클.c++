#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, N2=-1, N_orig,cnt=0;
    cin >> N;
    N_orig = N;

    while (N_orig != N2)
    {
        cnt++;

        N2 = N % 10 * 10 + (N / 10 + N % 10) % 10;

        N = N2;
    }

    cout << cnt;

    return 0;
}