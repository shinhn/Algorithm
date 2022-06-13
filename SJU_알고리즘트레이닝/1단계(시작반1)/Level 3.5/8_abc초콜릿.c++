#include <iostream>

using namespace std;

int main(){

    int a,b,c; 
    cin >> a >> b >> c; 

    for(int i=a;i<=b;i++){
        cout << i << " ";
    }
    cout << "\n";
    for(int i=a;i<=c;i++){
        cout << i << " ";
    }
    
    return 0;
}