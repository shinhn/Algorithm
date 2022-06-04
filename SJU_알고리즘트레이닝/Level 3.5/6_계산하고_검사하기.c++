#include <iostream>

using namespace std;

int main(){

    int a, b; 
    cin >> a >> b; 

    if(a*b > 30 && a*b < 50) cout << "적당한 사이즈";
    else if(a*b >= 50) cout << "큰 사이즈";
    else cout << "작은 사이즈";
    
    return 0;
}