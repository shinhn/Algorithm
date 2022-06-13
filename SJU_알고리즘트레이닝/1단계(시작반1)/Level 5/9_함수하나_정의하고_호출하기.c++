#include <iostream>

using namespace std;

char arr[3] = {'A','B','C'};

void KFC(){
    for(int i=0;i<3;i++){
        cout << arr[i];
    }
    cout << "\n";
}

int main(){
    
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        KFC();
    }
    
    return 0;
}