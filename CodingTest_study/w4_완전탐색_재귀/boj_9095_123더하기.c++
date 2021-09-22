#include <iostream>

using namespace std;

/*
<접근>
4 =>
1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
1+3
3+1

구성 요소이 같고 순서가 다른 것도 다른 방법으로 취급하므로 중복 고려 안함

<시간복잡도>
O(3^n)
*/

int n, test_case;
int ans; // 만들 수 있는 방법의 수

void func(int cur_sum) // cur_sum : 현재까지 더한 결과
{
    if (cur_sum == n)
        ans++;
    else if (cur_sum > n)
        return; // n을 초과했을 경우 ans를 카운트 하지 않고 종료
    else
    {
        func(cur_sum + 1);
        func(cur_sum + 2);
        func(cur_sum + 3);
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
        cin >> n;

        ans = 0;
        func(0);

        cout << ans << '\n';
    }
    return 0;
}