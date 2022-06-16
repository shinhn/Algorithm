#include <iostream>
using namespace std;

int arr1[2][3], arr[6], n;

int main(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> arr1[i][j];
            arr[n] = arr1[i][j];
            n++;
        }
    }

    int min, idx;
    for(int i=0;i<6;i++){
        min = arr[i];
        idx = i;
        for(int j=i+1;j<6;j++){
            if(arr[j] < min){
                min = arr[j];
                idx = j;
            }
        }

        int tmp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = tmp;
    }

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
        if(i==2) cout << "\n";        
    }



    return 0;
}