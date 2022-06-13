#include <iostream>
using namespace std;

int arr[3][3], n, t=2;

int main(){
    cin >> n;

    for(int i=0;i<3;i++){
        for(int j=t;j<3;j++){
            arr[i][j] = n;
            n++;
        }
        t--;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}