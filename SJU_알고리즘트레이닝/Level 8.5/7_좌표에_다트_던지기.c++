#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][3], y, x, a;

int main(){
    cin >> y >> x >> a;

    arr[y][x] = a;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    

    return 0;
}