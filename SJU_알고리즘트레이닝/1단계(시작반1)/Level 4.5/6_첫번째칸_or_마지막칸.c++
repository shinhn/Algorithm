#include <iostream>

using namespace std;

int main(){
    
    int arr[5] = {3,9,12,15,55};
    int a,b,c; 
    cin >> a >> b >> c; 

    if(a+b+c > 10) cout << arr[4];
    else cout << arr[0];
    
    
    return 0;
}