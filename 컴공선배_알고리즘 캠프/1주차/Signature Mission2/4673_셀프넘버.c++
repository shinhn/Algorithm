#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int fun(int num) // 생성자 만듦
{
    int sum = num;
    while (num != 0)
    {
        sum += (num % 10);
        num = num / 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool arr[10001] = {false};

    for (int i = 1; i <= 10000; i++)
    {
        if (fun(i) <= 10000)
            arr[fun(i)] = true;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (arr[i] == false) // 생성자 없는 경우 (셀프 넘버)
            cout << i << "\n";
    }

    return 0;
}