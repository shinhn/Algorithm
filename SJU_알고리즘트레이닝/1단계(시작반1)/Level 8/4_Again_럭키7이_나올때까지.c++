#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6];

int main(){
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    for(int i=5;i>=0;i--){
        cout << arr[i] << " ";
        if(arr[i] == 7) break;
    }

    return 0;
}