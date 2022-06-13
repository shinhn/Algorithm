#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n=2;
int arr[4][4];

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[j][i] = n;
            n+=2;
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