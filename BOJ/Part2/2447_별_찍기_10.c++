#include <iostream>

using namespace std;

void print(int i, int j, int n)
{
    if ((i / n) % 3 == 1 && (j / n) % 3 == 1) // 빈칸 조건
    {
        cout << " ";
    }
    else // 빈칸 조건 아닐 때
    {
        if (n == 1) // n==1 일때만 *을 찍어줘야함, 그렇지 않으면 N/3의 패턴으로 둘러쌓이지 않고 N/3의 패턴이 다 채워져서 출력됨
        {
            cout << "*";
        }
        else
        {
            print(i, j, n / 3);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            print(i, j, N);
        }
        cout << '\n';
    }

    return 0;
}