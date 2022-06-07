#include <iostream>

using namespace std;

void KFC(){
    for(int i=0;i<10;i++){
        cout << "#";
    }
    cout << "\n";
}

void MC(){
    for(int i=0;i<10;i++){
        cout << "@";
    }
    cout << "\n";
}

int main(){
    
    int n;
    cin >> n;

    KFC();
    MC();
    
    return 0;
}