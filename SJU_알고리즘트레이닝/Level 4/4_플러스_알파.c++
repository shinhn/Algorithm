#include <iostream>

using namespace std;

int main(){

    int n, arr[5];
    cin >> n;

    for(int i=0;i<5;i++){
        arr[i] = n+5;
    }

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}