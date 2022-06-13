#include <iostream>

using namespace std;

int n;

void KFC(){
    cin >> n;
}

void BBQ(){
    if(n>5)cout << "만세";
    else cout << "다시";
}

int main(){
    
    KFC();
    BBQ();
    
    return 0;
}