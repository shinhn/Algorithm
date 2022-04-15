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
    cin >> arr[0];
    cin >> arr[1];
    
    for(int i=2;i<6;i++){
        arr[i] = arr[i-1] * arr[i-2];
    }
    
    cout << arr[5] << "\n";

    return 0;
}