#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    bool arr[42];

    fill(arr, arr+42, false);

    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        arr[num % 42] = true;
    }

    int cnt=0;
    for (int i = 0; i < 42; i++)
    {
        if(arr[i]==true)cnt++;
    }

    cout << cnt;

    return 0;
}