#include <iostream>

using namespace std;

int arr[2][3], arr2[6], t;

int main(){
    
    for(int i=1;i>=0;i--){
        for(int j=2;j>=0;j--){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr2[t] = arr[i][j];
            t++;
        }
    }

    int tmp = arr2[0];
    arr2[0] = arr2[5];
    arr2[5] = tmp;

    for(int i=0;i<6;i++){
        cout << arr2[i] << " ";
    }

    return 0;
}