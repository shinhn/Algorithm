#include <iostream>
using namespace std;

int a, b;
int arr[5];

int main(){
    
    cin >> a >> b; 

    for(int i=0;i<5;i++){
        arr[i] = a;
        a += b;
    }

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    return 0;
}