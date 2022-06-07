#include <iostream>

using namespace std;

void LOT(){
    for(int i=1;i<=5;i++){
        cout << i;
    }
    cout << "\n";
}

int main(){
    
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        LOT();
    }
    
    return 0;
}