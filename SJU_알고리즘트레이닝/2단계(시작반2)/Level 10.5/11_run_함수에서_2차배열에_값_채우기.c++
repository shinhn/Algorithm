#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void run(int n){
    int arr[3][3], t=1;

    if(n<10){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i][j] = t;
                t++;
            }
        }
    }
    else{
        for(int i=0;i<3;i++){
            for(int j=2;j>=0;j--){
                arr[i][j] = t;
                t++;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main(){

    int n;
    cin >> n;

    run(n);

    return 0;
}