#include <iostream>
using namespace std;

int arr[5][4];

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }

    int sum;
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}