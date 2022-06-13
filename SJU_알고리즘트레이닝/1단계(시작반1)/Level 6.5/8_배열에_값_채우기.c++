#include <iostream>
using namespace std;

char arr1[5], arr2[5], ch;

int main(){
    cin >> ch;

    for(int i=0;i<5;i++){
        arr1[i] = char(ch+i);
    }

    for(int i=0;i<5;i++){
        arr2[i] = char(ch-i);
    }

    for(int i=0;i<5;i++){
        cout << arr1[i];
    }
    cout << "\n";
    for(int i=0;i<5;i++){
        cout << arr2[i];
    }

    return 0;
}