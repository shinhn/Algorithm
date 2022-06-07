#include <iostream>
using namespace std;

int arr[6],a,b;

int main(){
    
    cin >> a >> b; 

    for(int i=0;i<6;i++){
        if(a>b) break;
        arr[i] = a;
        a++;
    }

    for(int i=0;i<6;i++){
        if(arr[i] == 0) break;
        cout << arr[i];
    }

    return 0;
}