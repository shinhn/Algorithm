#include <iostream>

using namespace std;

int arr[5] = {4,1,2,3,5};

int main(){
    
    char ch;
    cin >> ch;

    if(ch == 'a' || ch == 'b' || ch == 'c'){
        for(int i=3;i>=0;i--){
            cout << arr[i] << " ";
        }
    }
    else{
        for(int i=4;i>=1;i--){
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}