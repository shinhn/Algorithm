#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[3][6], a, b;

int main(){

    cin >> a >> b;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<=3;j++){
            arr[i][j] = a;
        }
        for(int j=4;j<6;j++){
            arr[i][j] = b;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<6;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}