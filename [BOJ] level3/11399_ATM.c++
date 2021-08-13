#include <iostream>
#include <algorithm>

using namespace std;
/*
앞 사람의 인출 시간이 늘어날 수록 그만큼 뒷사람 모두가 대기 시간이 늘어나므로 인출 시간이 빠른 순으로 뽑으면 됨
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;
    cin >> N;

    int time[N];
    for (int i = 0; i < N; i++)
    {
        cin >> time[i];
    }

    sort(time, time + N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += time[j];
        }
    }

    cout << sum;
}