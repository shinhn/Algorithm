#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> c1, pair<int, int> c2)
{
    if (c1.first != c2.first)
        return c1.first < c2.first;
    else
        return c1.second < c2.second;
}

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int> > coor; // 좌표 : coordinate

    pair<int, int> tmp;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp.first >> tmp.second;
        coor.push_back(tmp);
    }

    sort(coor.begin(), coor.end(), cmp);

    for (int i = 0; i < N; i++)
    {
        cout << coor[i].first << ' ' << coor[i].second << '\n';
    }
}