#include <iostream>

using namespace std;

int main(){

    int a, x;
    cin >> a >> x;

    for(int i=a-1, n=0;n<x;i--,n++){
        cout << i << " ";
    }
    
    return 0;
}