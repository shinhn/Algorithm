#include <iostream>
#include <vector>

using namespace std;
/*
수열은 사전 순으로 증가하는 순서로 출력
중복 허용하지 않음 -> 숫자 사용여부 기록 (used)

<시간 복잡도>
O(N*M)
*/

int N, M, arr[10];
bool used[10];

void func(int k) // k : k개까지 선택
{
    if (k == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (!used[i])
        {
            arr[k] = i;
            used[i] = true;
            func(k + 1);     // 다음 숫자 탐색
            used[i] = false; // 다음 수열 탐색때 false가 되어 있어야 하므로
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    func(0);

    return 0;
}