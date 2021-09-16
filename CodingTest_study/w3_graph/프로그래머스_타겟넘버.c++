#include <string>
#include <vector>

#include <iostream>
#include <algorithm>

using namespace std;

/*
<문제>
numbers의 숫자들을 모두 사용해야함 -> dfs or bfs
숫자들을 모두 사용해 + or - 한 결과가 target과 같으면 answer ++

<시간복잡도>
??
*/

int answer = 0;

// cur_index : nubers에서 사용할 숫자 index
// cur_num : 현재까지 계산한 결과
void dfs(vector<int> &numbers, int target, int cur_index, int cur_num)
{
    if (cur_index == numbers.size()) // cur_index == numbers.size() -1 이 아닌 이유는, 마지막 숫자도 더하거나 빼줘야 하기 때문
    {
        if (cur_num == target)
        {
            answer++;
            return;
        }
    }
    else
    {
        // cout << cur_index << ' ' << cur_num << '\n';

        int cur_num_plus = cur_num + numbers[cur_index];
        dfs(numbers, target, cur_index + 1, cur_num_plus);

        int cur_num_minus = cur_num - numbers[cur_index];
        dfs(numbers, target, cur_index + 1, cur_num_minus);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    int target = 3;

    dfs(numbers, target, 0, 0);

    cout << answer;

    return 0;
}