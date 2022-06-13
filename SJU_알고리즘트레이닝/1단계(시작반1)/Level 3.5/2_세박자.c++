#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << n+i;
        }
        cout << "\n";
    }

    return 0;
}