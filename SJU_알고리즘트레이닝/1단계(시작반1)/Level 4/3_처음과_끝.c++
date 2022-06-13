#include <iostream>

using namespace std;

int main(){

    int arr[7];

    for(int i=0;i<7;i++){
        cin >> arr[i];
    }

    cout << arr[0]+arr[6];
    
    return 0;
}