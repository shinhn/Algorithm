#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (int l = 0; l < commands.size(); l++)
    {
        int i = commands[l][0];
        int j = commands[l][1];
        int k = commands[l][2];

        vector<int> tmp; // 자른 배열 임시 저장
        for (int m = i - 1; m <= j - 1; m++)
        {
            tmp.push_back(array[m]);
        }
        sort(tmp.begin(), tmp.end());

        answer.push_back(tmp[k - 1]);
    }
    return answer;
}

int main()
{
    vector<int> answer = solution({1, 5, 2, 6, 3, 7, 4}, {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}