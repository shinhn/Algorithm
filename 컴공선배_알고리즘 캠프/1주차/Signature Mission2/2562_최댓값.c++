#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    
    cout << *max_element(arr, arr + 9) << "\n";
    for (int i = 0; i < 9; i++)
    {
        if (*max_element(arr, arr + 9)  == arr[i])cout << i+1;
    }

    return 0;
}