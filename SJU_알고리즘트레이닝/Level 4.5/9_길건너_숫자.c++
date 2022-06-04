#include <iostream>

using namespace std;

int arr[4];

int main(){
    
    int a,b; 
    cin >> a >> b; 

    arr[0] = a;
    arr[2] = b; 

    for(int i=0;i<4;i++) cout << arr[i];
    
    return 0;
}