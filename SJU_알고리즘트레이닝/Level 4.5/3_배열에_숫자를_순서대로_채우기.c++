#include <iostream>

using namespace std;

int main(){
    
    int arr[5],n;
    cin >> n;

    for(int i=0;i<5;i++){
        arr[i] = n;
    }

    for(int i=0;i<5;i++){
        cout << arr[i];
    }
    
    return 0;
}