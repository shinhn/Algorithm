#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[2][3];

pair<int, int> MAX()
{
    int max = arr[0][0];
    pair<int, int> ans;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                ans = {i, j};
            }
        }
    }
    
    return ans;
}

pair<int, int> MIN()
{
    int min = arr[0][0];
    pair<int, int> ans;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
                ans = {i, j};
            }
        }
    }
    
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "(" << MAX().first << "," << MAX().second << ")"
         << "\n";
    cout << "(" << MIN().first << "," << MIN().second << ")"
         << "\n";

    return 0;
}