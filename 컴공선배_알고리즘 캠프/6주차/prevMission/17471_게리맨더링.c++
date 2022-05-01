#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int people[11];       // 지역별 인구수
bool connect[11][11]; // 지역간 연결관계
bool area[11];        // 지역 지정 현황 (빨간색으로 지정하면 나머지는 파란색)
bool visited[11];     // 방문 체크
queue<int> que;
int N, ans = 999999;

bool BFS(vector<int> vec, bool color)
{
    fill(visited, visited + 11, false);
    que.push(vec[0]);
    visited[vec[0]] = true;
    int cnt = 1;

    while (!que.empty())
    {
        int num = que.front();
        que.pop();
        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == false && connect[num][i] == true && area[i] == color)
            {
                cnt++;
                visited[i] = true;
                que.push(i);
            }
        }
    }

    if(vec.size() == cnt) return true;
    else return false;
}

bool is_possible()
{
    // 선거구에 따라 나눔
    vector<int> red, blue;
    for (int i = 1; i <= N; i++)
    {
        if (area[i] == true)
            red.push_back(i);
        else
            blue.push_back(i);
    }

    // 1. 각선거구의 지역이 1개 이상이어야 함
    if (red.size() == 0 || blue.size() == 0)
        return false;

    // 2. 각선거구의 지역들은 서로 연결 되어야 함
    if(BFS(red,true) == false || BFS(blue,false) == false) return false;

    return true;
}

void Set_area(int num, int cnt)
{ // num : 구역, cnt : 지정한 구역의 수
    if (cnt >= 1)
    { // 한개 이상 지정(빨강)부터는 팀이 나눠진 것이므로 최솟값 계산
        if (is_possible())
        {
            // 두 선거구의 인구 차이의 최솟값
            int cnt_r=0, cnt_b=0;
            for(int i=1;i<=N;i++){
                if(area[i] == true) cnt_r+=people[i];
                else cnt_b+=people[i];
            }
            ans = min(ans, abs(cnt_r-cnt_b));
        }
    }

    for (int i = num; i <= N; i++)
    {
        if (area[i] == false)
        {
            area[i] = true;
            Set_area(i, cnt + 1);
            area[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> people[i];
    }
    for (int i = 1; i <= N; i++)
    {
        int cnt;
        cin >> cnt;
        for (int j = 0; j < cnt; j++)
        {
            int num;
            cin >> num;
            connect[i][num] = true;
            connect[num][i] = true;
        }
    }

    Set_area(1, 0); // 1번부터 구역 지정

    if(ans==999999) cout << -1 << "\n";
    else cout << ans << "\n";

    return 0;
}