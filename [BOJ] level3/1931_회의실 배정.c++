#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
가장 많은 회의를 할 수 있게 해야 하므로
우선순위 : 끝나는 시간이 같을 경우 회의 시간이 짧은 회의, 끝나는 시간이 다를 경우 끝나는 시간이 빠른 회의

시작시간을 기준으로 잡으면 안되는 이유는
(1,15)가 있다고 가정하면 그사이에 (2,8), (9,15)가 들어갈 수 있지만 시작시간 우선순위가 (1,15)가 크므로 한번의 회의밖에 할 수 없음
*/

int N, cnt = 0;
vector<pair<int, int> > T;

bool cmp(pair<int, int> t1, pair<int, int> t2)
{
    if (t1.second == t2.second)
    {
        return t1.first < t2.first;
    }
    else
    {
        return t1.second < t2.second;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        pair<int, int> tmp;
        cin >> tmp.first >> tmp.second;
        T.push_back(tmp);
    }

    sort(T.begin(), T.end(), cmp);

    int p = T[0].second;
    cnt += 1;
    for (int i = 1; i < N; i++)
    {
        if (p <= T[i].first)
        {
            p = T[i].second;
            cnt += 1;
        }
    }

    cout << cnt;
}