#include <iostream>
using namespace std;

int arr[3][4];

int main(){
    int n=1;
    for(int i=2;i>=0;i--){
        for(int j=3;j>=0;j--){
            arr[i][j] = n;
            n++;
        }
    }

    int r;
    cin >> r;
    for(int i=0;i<4;i++){
        arr[r-1][i] = 7;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}