#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][3];

int main(){

    int n, num=9;
    cin >> n;
    if(n%5 == 1){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[j][i] = num;
                num--;
            }           
        }
    }
    else if(n%5 == 2){
        for(int i=0;i<3;i++){
            for(int j=2;j>=0;j--){
                arr[i][j] = num;
                num--;
            }           
        }
    }
    else {
        num = 10;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[j][i] = num;
                num++;
            }           
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }   
        cout << "\n";        
    }

    return 0;
}