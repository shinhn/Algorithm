#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int ans = 1;
    for (int i = 0; i < K; i++)
    {
        ans = ans * (N - i);
    }

    for (int i = K; i > 1; i--)
    {
        ans = ans / i;
    }

    cout << ans;
}