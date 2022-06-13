#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][4];

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    for(int i=0;i<4;i++){
        arr[0][i] = a+i;
    }

    for(int i=0;i<4;i++){
        arr[1][i] = b+i;
    }

    for(int i=0;i<4;i++){
        arr[2][i] = c+i;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}