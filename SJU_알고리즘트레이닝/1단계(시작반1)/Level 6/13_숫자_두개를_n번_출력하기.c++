#include <iostream>
using namespace std;

int a,b,c;

int main(){
    cin >> a >> b >> c;

    for(int i=0;i<c;i++){
        for(int i=a;i<=b;i++){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}