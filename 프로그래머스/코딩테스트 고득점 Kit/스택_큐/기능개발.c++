#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    queue<int> que; // 남은 일수 저장

    for (int i = 0; i < progresses.size(); i++)
    {
        int day = 100 - progresses[i];
        if (day % speeds[i] == 0)
            day = day / speeds[i];
        else
            day = day / speeds[i] + 1;

        que.push(day);
    }

    int front_day = que.front(); // 앞 순서 기능의 남은 일수, 비교용
    que.pop();
    int sum = 1; // 같이 배포되는 기능의 수

    while (!que.empty())
    {
        int day = que.front();
        que.pop();

        if (day <= front_day)
        {
            sum++;
        }
        else
        {
            answer.push_back(sum);
            sum = 1;
            front_day = day;
        }
    }

    answer.push_back(sum);

    return answer;
}