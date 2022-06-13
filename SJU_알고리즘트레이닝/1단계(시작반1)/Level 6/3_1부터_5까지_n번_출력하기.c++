#include <iostream>
using namespace std;

int n;

int main(){
    
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=5;j++){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}