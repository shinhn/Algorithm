#include <iostream>
using namespace std;

int a[5], b[5], c[5];

int main(){
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    for(int i=0;i<5;i++){
        cin >> b[i];
    }
    for(int i=0;i<5;i++){
        cin >> c[i];
    }

    for(int i=0;i<5;i++){
        cout << a[i] * b[i] + c[i] << " ";
    }

    return 0;
}