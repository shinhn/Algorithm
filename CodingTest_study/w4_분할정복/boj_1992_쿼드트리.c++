#include <iostream>
#include <vector>

using namespace std;
/*
주어진 영상이 모두 0으로만 되어 있으면 압축 결과는 "0"이 되고, 모두 1로만 되어 있으면 압축 결과는 "1"이 된다.
만약 0과 1이 섞여 있으면 전체를 한 번에 나타내지를 못하고, 왼쪽 위, 오른쪽 위, 왼쪽 아래, 오른쪽 아래, 이렇게 4개의 영상으로 나누어 압축
-> 분할정복

O(?)
*/

int N;

#define MAX 65
char arr[MAX][MAX];

vector<char> ans;

void func(int y, int x, int size)
{
    // 기저사례 1 : 영상크기(size)가 1인 경우
    if (size == 1)
    {
        ans.push_back(arr[y][x]);
        return;
    }

    // 기저사례 2 : 주어진 영상이 모두 0 또는 1으로만 되어있는 경우
    bool tp_0 = false, tp_1 = false;

    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (arr[i][j] == '0')
                tp_0 = true;
            if (arr[i][j] == '1')
                tp_1 = true;
        }
    }

    if (tp_0 == true && tp_1 == false)
    {
        ans.push_back('0');
        return;
    }

    if (tp_0 == false && tp_1 == true)
    {
        ans.push_back('1');
        return;
    }

    // 1/4로 분할
    size = size / 2;

    ans.push_back('(');
    func(y, x, size);
    func(y, x + size, size);
    func(y + size, x, size);
    func(y + size, x + size, size);
    ans.push_back(')');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    func(0, 0, N);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}