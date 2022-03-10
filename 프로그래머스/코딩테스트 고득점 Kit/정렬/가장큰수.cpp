#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string n1, string n2)
{
    return n1 + n2 > n2 + n1;
}

string solution(vector<int> numbers)
{
    vector<string> tmp;
    for (int i = 0; i < numbers.size(); i++)
    {
        tmp.push_back(to_string(numbers[i]));
    }

    sort(tmp.begin(), tmp.end(), cmp);
    string answer = "";

    // 주어진 정수가 모두 0인 경우 0 리턴 (000리턴x)
    if (tmp[0] == "0")
        return "0";

    for (int i = 0; i < tmp.size(); i++)
    {
        answer += tmp[i];
    }

    return answer;
}

int main()
{

    string answer = solution({6, 10, 2});
    cout << answer;

    return 0;
}