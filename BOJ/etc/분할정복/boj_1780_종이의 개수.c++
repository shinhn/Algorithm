#include <iostream>

using namespace std;
/*
1. 만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
2. (1)이 아닌 경우에는 종이를 같은 크기의 종이 9개로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.

종이를 잘라가며 분할하여 종이의 개수를 세는 문제이므로 분할정복

기저사례 :
종이가 모두 같은 수
종이의 크기가 1

O() ??
*/

int N, cnt[3]; // cnt[0] : -1로만 채워진 종이의 수, cnt[1] : 0으로만 채워진 종이의 수, cnt[2] : 1로만 채워진 종이의 수

#define MAX 2187 // 3^7
int arr[MAX][MAX];

void count(int y, int x, int size)
{
    // 기저사례1 : 종이의 크기가 1
    if (size == 1)
    {
        if (arr[y][x] == -1)
            cnt[0]++;
        if (arr[y][x] == 0)
            cnt[1]++;
        if (arr[y][x] == 1)
            cnt[2]++;

        return;
    }

    // 기저사례2 : 종이가 모두 같은 수
    bool tp1 = false, tp2 = false, tp3 = false; // t1 : -1, t2 : 0 , t3 : 1
    for (int i = y; i < y + size; i++)
    {
        for (int j = x; j < x + size; j++)
        {
            if (arr[i][j] == -1)
                tp1 = true;
            if (arr[i][j] == 0)
                tp2 = true;
            if (arr[i][j] == 1)
                tp3 = true;
        }
    }

    if (tp1 == true && tp2 == false && tp3 == false)
    {
        cnt[0]++;
        return;
    }

    if (tp1 == false && tp2 == true && tp3 == false)
    {
        cnt[1]++;
        return;
    }

    if (tp1 == false && tp2 == false && tp3 == true)
    {
        cnt[2]++;
        return;
    }

    // 9칸으로 분할
    size = size / 3;

    count(y, x, size);
    count(y, x + size, size);
    count(y, x + size + size, size);

    count(y + size, x, size);
    count(y + size, x + size, size);
    count(y + size, x + size + size, size);

    count(y + size + size, x, size);
    count(y + size + size, x + size, size);
    count(y + size + size, x + size + size, size);
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

    count(0, 0, N);

    cout << cnt[0] << '\n'
         << cnt[1] << '\n'
         << cnt[2];

    return 0;
}