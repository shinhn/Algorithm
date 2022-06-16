#include <iostream>
using namespace std;

int a,b,c;

int main(){
    cin >> a >> b >> c;

    for(int i=0;i<c;i++){
        for(int j=a;j<a+b;j++){
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}