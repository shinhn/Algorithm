#include <iostream>

using namespace std;

int arr[7] = {3,5,1,2,4,6,7};

int main(){
    
    int a,b; 
    cin >> a >> b; 

    for(int i=a;i<=b;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}