#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6][2], cnt;

int main(){

    for(int i=0;i<6;i++){
        for(int j=0;j<2;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<6;i++){
        if(arr[i][0] < arr[i][1]){
            int tmp = arr[i][0];
            arr[i][0] = arr[i][1];
            arr[i][1] = tmp;
            cnt ++;
        }
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<2;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << cnt << "명";

    return 0;
}