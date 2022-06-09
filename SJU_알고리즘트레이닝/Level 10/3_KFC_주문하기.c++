#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int chicken(){
    int n;
    cin >> n;
    return n+10;
}

char coke(){
    char ch;
    cin >> ch;
    return ch;
}

void KFC(){
    int n = chicken();
    char ch = coke();
    cout << n << ch;
}

int main(){

    KFC();

    return 0;
}