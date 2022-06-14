#include <iostream>
#include <cstring>
using namespace std;

void Magic(int arr[][3]){
    int t=0, n=1;

    for(int i=0;i<3;i++){
        for(int j=t;j<3;j++){
            arr[i][j] = n;
            n++;
        }
        t++;
    }
}

void output(int arr[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==0) cout << " ";
            else cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main(){
    int arr[3][3];
    memset(arr,0,sizeof(arr));

    Magic(arr);
    output(arr);

    return 0;
}