/*
현재 줄 서있는 곳과 한 명씩만 설 수 있는 공간을 활용하여 순서대로 나갈 수 있으면 Nice 출력 (<-> Sad)
한 명씩만 설 수 있는 공간은 입출력이 한곳에서만 발생하므로 stack으로 구현
입력 순서와 현재 줄 서있는 곳 순서가 반대 이므로 현재 줄 서있는 곳은 que로 구현
*/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> L1; // L1 : 현재 줄 서있는 곳
    stack<int> L2; // L2 : 한 명씩만 설 수 있는 공간

    int N, people, order = 1;
    cin >> N;

    while (N--)
    {
        cin >> people;
        L1.push(people);
    }

    while (!L1.empty())
    {
        if (order == L1.front())
        {
            L1.pop();
            order++;
        }
        else
        {
            if (!L2.empty() && order == L2.top()) // 첫시도 때 다음 경우를 생각하지 못해 틀렸었음
            {
                L2.pop();
                order++;
            }
            else
            {
                L2.push(L1.front());
                L1.pop();
            }
        }
    }

    while (!L2.empty())
    {
        if (order == L2.top())
        {
            L2.pop();
            order++;
        }
        else
        {
            break;
        }
    }

    if (L2.empty())
        cout << "Nice";
    else
        cout << "Sad";
}