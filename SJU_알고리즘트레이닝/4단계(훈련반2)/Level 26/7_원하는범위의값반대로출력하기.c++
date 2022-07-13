#include <iostream>
using namespace std;

int arr[7] = {3,5,5,6,9,1,2};


int main(){
    
    int a, b;
    cin >> a >> b;

    for(int i=0;i < (b-a+1)/2;i++){
        int tmp = arr[a+i];
        arr[a+i] = arr[b-i];
        arr[b-i] = tmp;
    }

    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }

    return 0;
}