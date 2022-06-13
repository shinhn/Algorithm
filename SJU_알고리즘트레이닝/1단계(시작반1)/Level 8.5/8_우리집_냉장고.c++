#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6][3], a, b;

int main(){

    cin >> a >> b;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = a;
        }
    }

    for(int i=3;i<6;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = b;
        }
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}