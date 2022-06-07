#include <iostream>
using namespace std;

int arr[6], a, b;

int main(){
    
    cin >> a >> b; 

    for(int i=0;i<3;i++){
        arr[i] = a;
        a++;
    }

    for(int i=5;i>=3;i--){
        arr[i] = b;
        b--;
    }

    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }

    return 0;
}