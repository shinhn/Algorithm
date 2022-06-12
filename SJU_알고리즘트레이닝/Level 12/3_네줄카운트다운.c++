#include <iostream>
using namespace std;

int n;

int main(){
    cin >> n;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << n-i;
        }
        cout << "\n";
    }

    return 0;
}