#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int N, l, M, ans, cnt;
vector<pair<int, int>> fish;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> l >> M;
    for (int i = 0; i < M; i++)
    {
        int y, x;
        cin >> y >> x;
        fish.push_back({y, x});
    }

    sort(fish.begin(), fish.end());

    for (int n = 0; n < M; n++)
    {
        int i = fish[n].first;
        int j = fish[n].second;

        for (int h = 1; h < l / 2; h++)
        {
            int w = l / 2 - h; // 그물의 가로 길이

            if(j + w > N || i + j > N) continue; // 영역 밖으로 그물을 치는 경우

            // 고기가 그물의 경계에 유지시킨채로 그물의 꼭지점을 왼쪽으로 이동
            for (int x = j; x >= 1; x--)
            {                      
                if (x + w < j)
                    continue; // 고기가 그물의 가로 경계에서 벗어난 경우

                // 고기수 카운트
                cnt = 0;
                for (int f = 0; f < fish.size(); f++)
                {
                    if ((fish[f].first >= i && fish[f].first <= i + h) && (fish[f].second >= x && fish[f].second <= x + w))
                        cnt++;
                }
                ans = max(ans, cnt);
            }

            // 고기가 그물의 경계에 유지시킨채로 그물의 꼭지점을 위쪽으로 이동
            for (int y = i; y >= 1; y--)
            {                      
                if (y + h < i)
                    continue; // 고기가 그물의 세로 경계에서 벗어난 경우

                // 고기수 카운트
                cnt = 0;
                for (int f = 0; f < fish.size(); f++)
                {
                    if ((fish[f].first >= y && fish[f].first <= y + h) && (fish[f].second >= j && fish[f].second <= j + w))
                        cnt++;
                }
                ans = max(ans, cnt);
            }
        }
    }

    cout << ans << "\n";

    return 0;
}