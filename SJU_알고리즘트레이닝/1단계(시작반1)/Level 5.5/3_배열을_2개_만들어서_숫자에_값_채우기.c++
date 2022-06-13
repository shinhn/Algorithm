#include <iostream>

using namespace std;

int arr1[5], arr2[5];

void PrintAll(){
    for(int i=0;i<5;i++){
        cout << arr1[i];
    }

    cout << "\n";

    for(int i=0;i<5;i++){
        cout << arr2[i];
    }
}

int main(){
    
    int n1, n2;
    cin >> n1 >> n2;

    for(int i=0;i<5;i++){
        arr1[i] = n1;
    }

    for(int i=0;i<5;i++){
        arr2[i] = n2;
    }

    PrintAll();
    
    return 0;
}