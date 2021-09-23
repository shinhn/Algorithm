#include <iostream>

using namespace std;
/*
잘라진 종이가 모두 하얀색 또는 모두 파란색으로 칠해져 있거나, / 하나의 정사각형 칸이 되어 더 이상 자를 수 없을 때까지 반복
-> 분할정복

O(4^7)
*/

int N, cnt[2]; // cnt[0] : 하얀색 색종이 수, cnt[1] : 파란색 색종이 수

#define MAX 128
int arr[MAX][MAX];

void func(int y, int x, int size)
{
    // // 기저사례1 : 하나의 정사각형 칸이 되어 더 이상 자를 수 없을 때
    // if (size == 1)
    // {
    //     if (arr[y][x] == 0)
    //         cnt[0]++;
    //     if (arr[y][x] == 1)
    //         cnt[1]++;
    //     return;
    // }

    // 기저사례2 : 잘라진 종이가 모두 하얀색 또는 모두 파란색
    bool tp_W = false, tp_B = false; // tp_W : 잘라진 종이가 모두 하얀색(0), tp_B : 잘라진 종이가 모두 파란색(1)
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (arr[i][j] == 0)
                tp_W = true;
            if (arr[i][j] == 1)
                tp_B = true;
        }
    }

    if (tp_W == true && tp_B == false) // 잘라진 종이가 모두 하얀색
    {
        cnt[0]++;
        return;
    }

    if (tp_W == false && tp_B == true) // 잘라진 종이가 모두 파란색
    {
        cnt[1]++;
        return;
    }

    // 1/4으로 분할
    size = size / 2;

    func(y, x, size);
    func(y, x + size, size);

    func(y + size, x, size);
    func(y + size, x + size, size);
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

    cout << cnt[0] << '\n'
         << cnt[1];

    return 0;
}