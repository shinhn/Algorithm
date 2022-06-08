#include <iostream>
using namespace std;

int arr1[5], arr2[5];

int main(){
    for(int i=0;i<5;i++){
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    for(int i=0;i<5;i++){
        cout << arr1[i] << " ";
    }
    cout << "\n";
    for(int i=0;i<5;i++){
        cout << arr2[i] << " ";
    }

    return 0;
}