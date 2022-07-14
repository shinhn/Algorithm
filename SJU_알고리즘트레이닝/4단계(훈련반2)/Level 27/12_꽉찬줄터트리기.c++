#include <iostream>
using namespace std;

int arr[5][4];

int main(){

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<5;i++){
        if(arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1 && arr[i][3] == 1){
            for(int j=0;j<4;j++){
                arr[i][j] = 0;
            }
            for(int j=0;j<4;j++){
                for(int k=i-1;k>=0;k--){
                    if(arr[k][j] == 1){
                        arr[k][j] = 0;
                        arr[k+1][j] = 1;
                    }
                }
            }
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}