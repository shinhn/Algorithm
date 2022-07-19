#include <iostream>
using namespace std;

/*
n = 5

0,0 -> 0,4
0,1 -> 1,4

1,1 -> 1,3
1,2 -> 2,3
2,1 -> 1,2

i,j -> j,n-1-i

*/

int n, k;

int main(){

    cin >> n >> k;

    int arr[n][n], tmp[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    while(k--){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                tmp[j][n-1-i] = arr[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = tmp[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}