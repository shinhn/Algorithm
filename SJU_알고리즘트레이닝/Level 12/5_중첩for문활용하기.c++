#include <iostream>
using namespace std;

int n, arr[3][4], t=2;

int main(){
    cin >> n;

    for(int i=0;i<3;i++){
        for(int j=t;j<4;j++){
            arr[i][j] = n;
            n++;
        }
        t--;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == 0) cout << " ";
            else cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}