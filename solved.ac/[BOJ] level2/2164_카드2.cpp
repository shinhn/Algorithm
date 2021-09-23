#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

/*
1. 일반 vector 사용
-> 시간초과 error

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> num;
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        num.push_back(i);
    }

    while (num.size() > 1)
    {
        num.erase(num.begin());

        num.push_back(num[0]);

        num.erase(num.begin());
    }

    cout << num[0];
}
*/

/*
2. queue 사용
#include <queue>

queue : front에서만 삭제하고, end에서 삽입

int main()
{
    int N;
    cin >> N;

    queue<int> num;
    for (int i = 1; i <= N; i++)
    {
        num.push(i);
    }

    while (num.size() > 1)
    {
        num.pop();
        int tmp = num.front();
        num.pop();
        num.push(tmp);
    }

    cout << num.front();
}


3. deque 사용
deque : front와 end에서 삭제와 삽입이 모두 가능
(본 문제에서 알고리즘 자체는 동일하므로 코드 생략)
*/