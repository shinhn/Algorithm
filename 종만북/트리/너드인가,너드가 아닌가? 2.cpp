#include <iostream>
#include <map>

using namespace std;

// 이진탐색트리 역할을 해주는 stl map을 이용
// map은 key와 value를 first와 second에 저장

map<int, int> coords;

int TestCase, N, result, x, y;

bool isDominated(int x, int y)
{
    map<int, int>::iterator it = coords.lower_bound(x);
    // lower_bound : 오른쪽 원소(기준 원소보다 크거나 같은) 중 가장 왼쪽에 있는 원소(첫 번째 원소)의 iterator값을 리턴
    // 찾을 수 없다면 끝 원소 리턴

    // 끝까지 갔다는 것은 오른쪽에 크거나 같은 원소가 없다는 것이므로 지배되지 않았음을 의미
    if (it == coords.end())
        return false;

    // 끝까지 못갔다면 중간에 멈춘 iterator의 y값이 인자(x,y) y값보다 크다면 인자(x,y) 는 지배됨을 의미
    if (y < it->second)
        return true;
    else
        return false;
}

void removeDominated(int x, int y)
{
    map<int, int>::iterator it = coords.lower_bound(x);

    // 아직 시작점이라는 것은 (x, y)보다 왼쪽에 있는 점이 없다는 뜻이므로 지울것이 없음
    if (it == coords.begin())
        return;

    it--; // it가 (x,y)보다 크거나 같은 점에서 멈췄으므로 하나 왼쪽으로 이동하면 -> it는 (x,y)바로 왼쪽에 있는 점

    while (1)
    {
        // it가 (x,y)에 지배되지 않을 경우
        if (it->second > y)
            break;
        else // it가 (x,y)에 지배될 경우
        {
            // 이전 점이 더 없을 경우 it만 삭제
            if (it == coords.begin())
            {
                coords.erase(it);
                break;
            }
            else
            {
                // 이전 점이 더 있을 경우 it를 이전 점으로 이동 (기존 it는 삭제)
                map<int, int>::iterator tmp = it;
                tmp--;
                coords.erase(it);
                it = tmp;
            }
        }
    }
}

int registered(int x, int y)
{
    // (x,y)가 지배되어있는 경우 (x,y)를 map에 추가하지 않고 참가 자격 사람의 수 리턴
    if (isDominated(x, y))
        return coords.size();
    else
    {
        // (x,y)에 지배되는 점들 삭제
        removeDominated(x, y);

        // map에 (x,y) 추가
        coords[x] = y;

        // 참가 자격 사람의 수 리턴
        return coords.size();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> TestCase;
    while (TestCase--)
    {
        cin >> N;
        result = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> x >> y;
            result += registered(x, y);
        }
        cout << result << '\n';
    }

    return 0;
}