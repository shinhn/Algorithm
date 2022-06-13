#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n=1;
int arr[5][5];

int main(){

    for(int i=4;i>=0;i--){
        for(int j=0;j<5;j++){
            arr[j][i] = n;
            n++;
        }
    }

    int col;
    cin >> col;

    for(int i=0;i<5;i++){
        arr[col][i] = col;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}