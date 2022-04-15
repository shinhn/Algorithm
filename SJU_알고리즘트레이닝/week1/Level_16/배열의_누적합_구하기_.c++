#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[6];

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < 6; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}