#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char getChar(){
    char a, b; 
    cin >> a >> b; 
    if(a>b) return a;
    else return b;
}

int main(){

    cout << getChar();

    return 0;
}