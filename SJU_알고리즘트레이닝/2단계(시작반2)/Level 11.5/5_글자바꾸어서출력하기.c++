#include <iostream>

using namespace std;

char arr[2][3];

int main(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
            if(arr[i][j] == '0') arr[i][j] = '#';
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}