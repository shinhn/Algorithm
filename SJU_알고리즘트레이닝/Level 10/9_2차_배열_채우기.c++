#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[4][4];

int main(){

    int num=1;
    for(int i=3;i>=0;i--){
        for(int j=0;j<4;j++){
            arr[j][i] = num;
            num++;
        }           
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }           
        cout << "\n";
    }

    return 0;
}