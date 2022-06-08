#include <iostream>
using namespace std;

char a,b;

int main(){
    cin >> a >> b; 

    for(int i=0;i<4;i++){
        for(int i=a;i<=b;i++){
            cout << char(i) << " ";
        }
        cout << "\n";
    }

    return 0;
}