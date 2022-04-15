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

    int arr1[4], arr2[4], sum[4];

    for(int i=0;i<4;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<4;i++){
        cin >> arr2[i];
    }

    for(int i=0;i<4;i++){
        sum[i] = arr1[i] + arr2[3-i];
    }

    for(int i=0;i<4;i++){
        cout << sum[i] << " ";
    }

    cout << "\n";

    return 0;
}