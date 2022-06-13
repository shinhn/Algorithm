#include <iostream>

using namespace std;

int arr[5];

void KFC(){
    for(int i=0;i<5;i++){
        cout << arr[i];
    }
}

int main(){
    
    int n;
    cin >> n;
    for(int i=0;i<5;i++){
        arr[i] = n;
        n--;
    }

    KFC();
    
    return 0;
}