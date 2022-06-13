#include <iostream>

using namespace std;

int main(){

    int a,b,c; 
    cin >> a >> b >> c; 

    if(a >= b && a >= c) cout << "MAX발견";
    else cout << "MAX아님";
    
    return 0;
}