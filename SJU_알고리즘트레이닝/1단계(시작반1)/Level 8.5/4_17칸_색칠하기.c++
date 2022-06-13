#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[17], a, b, c;

int main(){
    cin >> a >> b >> c; 

    for(int i=0;i<=6;i++){
        arr[i] = a;
    }

    for(int i=7;i<=12;i++){
        arr[i] = b;
    }

    for(int i=13;i<=16;i++){
        arr[i] = c;
    }

    for(int i=16;i>=0;i--){
        cout << arr[i];
    }

    return 0;
}