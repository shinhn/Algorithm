#include <iostream>
using namespace std;

int arr[2][3] = {{3,1,1},{2,3,2}};

int main(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
    }

    return 0;
}