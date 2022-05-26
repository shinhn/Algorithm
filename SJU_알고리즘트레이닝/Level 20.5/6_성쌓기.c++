#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[7];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<7;i++){
        cin >> arr[i];
    }

    for(int i=3;i<=6;i++){
        for(int j=0;j<=i;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}