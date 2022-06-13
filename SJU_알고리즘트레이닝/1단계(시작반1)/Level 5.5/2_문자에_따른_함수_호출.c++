#include <iostream>

using namespace std;

void KFC(){
    cout << "KFC\n";
}

void BBQ(){
    cout << "BBQ\n";
}

int main(){
    
    char ch;
    cin >> ch;

    if(ch == 'B'){
        KFC();
        BBQ();
    }
    else if(ch == 'b') BBQ();
    else KFC();
    
    return 0;
}