#include <iostream>
using namespace std;

int n, arr[4][4];

int main(){
    cin >> n;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = n;
            n++;
        }
        i++;
        for(int j=3;j>=0;j--){
            arr[i][j] = n;
            n++;
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