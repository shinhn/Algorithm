#include <iostream>
using namespace std;

char a, b;

void getName(){
    cin >> a >> b;
}

int main(){
    getName();
    if(a < b) cout << a;
    else cout << b;

    return 0;
}