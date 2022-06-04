#include <iostream>

using namespace std;

int main(){
    
    int arr[6], n;

    cin >> n;

    for(int i=0;i<6;i++){
        arr[i] = n;
        n--;
    }

    cout << arr[2];
    
    return 0;
}