#include <iostream>
using namespace std;

int op, t;
int arr[5][5];

int main(){
    cin >> op;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }

    if(op==1){
        t=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<=t;j++){
                cout << arr[i][j] << " ";
            }
            t++;
            cout << "\n";
        }
    }
    else{
        t=4;
        for(int i=0;i<5;i++){
            for(int j=0;j<=t;j++){
                cout << arr[i][j] << " ";
            }
            t--;
            cout << "\n";
        }
    }

    return 0;
}