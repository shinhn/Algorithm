#include <iostream>

using namespace std;

void KFC(){
    cout << "KFC입니다\n";
}

void MC(){
    cout << "MC입니다\n";
}

int main(){
    
    int n;
    cin >> n;

    if(n==1) KFC();
    if(n==2) MC();
    
    return 0;
}