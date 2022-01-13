/*
1. A는 A끼리, B는 B끼리 쌍을 짓는다.
    -> 괄호끼리 쌍을 짓는 문제와 비슷(stack)

2. 각 쌍의 선끼리 교차해서는 안된다.
    -> 새로 넣을 문자와 top 문자를 비교하여 같으면 pop
    다르면 push하고 마지막에 남은 문자가 없다면 좋은 단어 ++
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> voca;
    string str;
    int cnt = 0, N;

    cin >> N;
    while (N--)
    {
        cin >> str;

        if (!voca.empty()) // 다음 단어 탐색 시작 할때 stack이 비어있어야 됨
        {
            while (!voca.empty())
            {
                voca.pop();
            }
        }

        for (int i = 0; i < str.size(); i++)
        {
            if (voca.empty())
                voca.push(str[i]);
            else
            {
                if (voca.top() == str[i])
                {
                    voca.pop();
                }
                else
                {
                    voca.push(str[i]);
                }
            }
        }

        if (voca.empty())
            cnt++;
    }

    cout << cnt;
}