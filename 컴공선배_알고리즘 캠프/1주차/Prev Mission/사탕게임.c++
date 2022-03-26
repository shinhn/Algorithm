#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N, sum, ans = 0;

void count(string *candy)
{
    for(int i=0;i<N;i++){
        sum=1;
        for(int j=1;j<N;j++){
            if (candy[i][j] == candy[i][j - 1])
            {
                sum += 1;
                if (sum > ans)
                    ans = sum;
            }
            else
                sum = 1;
        }
    }

    for(int j=0;j<N;j++){
        sum = 1;
        for(int i=1;i<N;i++){
            if (candy[i][j] == candy[i - 1][j])
            {
                sum += 1;
                if (sum > ans)
                    ans = sum;
            }
            else
                sum = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    string candy[N];

    for (int i = 0; i < N; i++)
    {
        cin >> candy[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j + 1 < N)
            {
                // 오른쪽과 교환
                swap(candy[i][j], candy[i][j + 1]);

                count(candy);

                // 원위치
                swap(candy[i][j], candy[i][j + 1]);
            }

            if (i + 1 < N)
            {
                // 아래쪽과 교환
                swap(candy[i][j], candy[i + 1][j]);

                count(candy);

                // 원위치
                swap(candy[i][j], candy[i + 1][j]);
            }
        }
    }

    cout << ans;
}