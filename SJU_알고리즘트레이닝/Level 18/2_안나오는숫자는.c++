#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int arr[3][3];
bool check[10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
            if(!check[arr[i][j]]) check[arr[i][j]] = true;
        }
    }

    for(int i=1;i<=9;i++){
        if(!check[i]) cout << i << " ";
    }

    return 0;
}