#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> que;
int N, x;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;

        if (x == 0)
        {
            if(que.empty()==true)
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << -que.top() << '\n';
                que.pop();
            }
        }
        else
        {
            que.push(-x);
        }
    }
}

/*
priority_queue는 기본적으로 내림차순으로 저장 -> 최대힙에 사용
구하고자 하는 것은 최소힙이므로 원소를 저장할때 음수로 저장한뒤 출력할때 다시 양수로 변환하면 최소힙을 구할 수 있을 것 같다.
*/

/*
priority_queue<int, vector<int>, greater<int>> heap;
-> 최대힙을 최소힙으로 하고 싶은 경우
-> priority_queue을 올림차순으로 바꿔주는 선언문
*/