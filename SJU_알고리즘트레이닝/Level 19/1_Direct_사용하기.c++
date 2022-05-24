#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[3][3] = {
    {3, 5, 4}, 
    {1, 1, 2}, 
    {1, 3, 9} 
};

int y,x, ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> y >> x;

    if(arr[y+1][x]) ans += arr[y+1][x];
    if(arr[y-1][x]) ans += arr[y-1][x];
    if(arr[y][x+1]) ans += arr[y][x+1];
    if(arr[y][x-1]) ans += arr[y][x-1];

    cout << ans;

    return 0;
}