#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BBQ(int a, int b){
    cout << "합:" << a+b << "\n";
    cout << "차:" << a-b << "\n";
    cout << "곱:" << a*b << "\n";
    cout << "몫:" << a/b << "\n";
}

int main(){

    int a, b; 
    cin >> a >> b; 

    BBQ(a, b);
    

    return 0;
}