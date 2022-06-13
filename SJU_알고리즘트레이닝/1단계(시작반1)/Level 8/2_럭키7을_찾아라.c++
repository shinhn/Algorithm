#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[6];

int main(){
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    for(int i=0;i<6;i++){
        if(arr[i] == 7) break;
        cout << arr[i] << " ";
    }

    return 0;
}