#include <iostream>
#include <vector>

using namespace std;
/*
<문제>
3개의 삼각수의 합으로 표현될 수 있는지 없는지 판단 -> 있으면 1, 없으면 0 출력
3개의 삼각수가 모두 달라야 할 필요는 없다. -> 중복 가능

<접근>
삼각수 Tn을 모두 저장 해둔뒤 (numbers)
중복을 허용하여 완전탐색

<시간복잡도>
O(n*n*n)

-> for문을 3개나 중첩하여 사용해서 시간초과가 나지 않을까 싶었지만 의외로 나지 않았음
*/

int K, test_case, ans;
vector<int> numbers;

void func()
{
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < K; j++)
        {
            for (int k = 0; k < K; k++)
            {
                if (numbers[i] + numbers[j] + numbers[k] == K)
                {
                    ans = 1;
                    return;
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> test_case;
    while (test_case--)
    {
        cin >> K;

        for (int i = 1; i <= K; i++)
        {
            numbers.push_back(i * (i + 1) / 2);
        }

        ans = 0;
        func();
        cout << ans << '\n';
    }

    return 0;
}