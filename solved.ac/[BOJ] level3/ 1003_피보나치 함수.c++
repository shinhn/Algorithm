#include <iostream>

using namespace std;
/*
피보나치(재귀) -> 시간초과

피보나치의 시간복잡도는 O(n^2)이므로 수행시간을 줄이기 위해서는
기존의 재귀함수가 아닌 점화식으로 피보나치를 수행해야함
       0 1
------------
T = 0, 1 0
T = 1, 0 1
T = 2, 1 1
T = 3, 1 2
T = 4, 2 3 
T = 5, 3 5
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, result;
    cin >> T;

    int zero[41] = {
        1,
        0,
    };
    int one[41] = {
        0,
        1,
    };

    while (T > 0)
    {
        T--;
        cin >> N;

        for (int i = 2; i <= N; i++)
        {
            zero[i] = zero[i - 1] + zero[i - 2];
            one[i] = one[i - 1] + one[i - 2];
        }

        cout << zero[N] << ' ' << one[N] << '\n';
    }
}