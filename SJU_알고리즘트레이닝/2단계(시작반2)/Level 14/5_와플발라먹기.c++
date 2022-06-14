#include <iostream>
using namespace std;

int arr[3][3];

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    int t = 0, sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<=t;j++){
            sum += arr[i][j];
        }
        t++;
    }

    cout << sum;

    return 0;
}