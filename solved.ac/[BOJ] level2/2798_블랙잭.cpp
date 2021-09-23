#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int num[N];

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = num[i] + num[j] + num[k];
                if (sum > max && sum <= M)
                    max = sum;
            }
        }
    }

    cout << max;
}