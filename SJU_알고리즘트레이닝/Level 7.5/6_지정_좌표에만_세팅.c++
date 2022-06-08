#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2][4], y, x;

int main(){
    cin >> y >> x;

    arr[y][x] = 1;

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}