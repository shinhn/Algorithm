#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, p2 = 0, tmp;            // p2 : 압축된 좌표
vector<pair<int, int> > point; // pair<(좌표값),(인덱스)>

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
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
        cin >> tmp.first;
        tmp.second = i;

        point.push_back(tmp);
    }

    sort(point.begin(), point.end());

    tmp = point[0].first;
    point[0].first = p2; // p2 == 0
    for (int i = 1; i <= N; i++)
    {
        if (point[i].first == tmp)
        {
            point[i].first = p2;
        }
        else
        {
            tmp = point[i].first;
            p2++;
            point[i].first = p2;
        }
    }

    sort(point.begin(), point.end(), cmp);

    // for (int i = 0; i < N; i++)
    // {
    //     cout << point[i].first << ' ' << point[i].second << '\n';
    // }

    for (int i = 0; i < N; i++)
    {
        cout << point[i].first << ' ';
    }
}

/*
Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 서로 다른 좌표의 개수와 같아야 한다.
-> 가장 작은 값의 좌표가 0으로 압축되고 이후에는 크기 순위대로 1,2,3,..으로 압축하면 됨 (크기가 같을 경우에는 순위 동일)

-> 좌표와 인덱스를 pair로 저장하고
-> 좌표(.first)을 기준으로 올림차순 저장한 뒤
-> 좌표를 정렬 순으로 압축 (0,1,2,3,...)
-> 다시 인덱스(.second)를 기준으로 정렬한 뒤 압축된 좌표 출력
*/