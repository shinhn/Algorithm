#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, arr[4][4], num;

int main(){

    cin >> n;

    if(n%2 == 0){
        num=1;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i==j) {
                    arr[i][j] = num;
                    num++;
                }
            }
        }
    }
    else{
        num=1;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i+j==3) {
                    arr[i][j] = num;
                    num++;
                }
            }
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