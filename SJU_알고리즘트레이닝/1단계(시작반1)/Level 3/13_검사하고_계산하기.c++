#include <iostream>

using namespace std;

int main(){

    int a, b, c; 
    cin >> a >> b >> c; 

    if((a+b+c) > 10) cout << a*b*c; 
    else cout << 0;

    return 0;
}