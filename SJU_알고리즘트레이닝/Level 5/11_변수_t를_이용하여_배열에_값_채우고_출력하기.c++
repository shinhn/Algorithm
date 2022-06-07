#include <iostream>

using namespace std;

int arr[6];

void PrintAll(){
    for(int i=0;i<6;i++){
        cout << arr[i] << "\n";
    }
}

int main(){
    
    int n;
    cin >> n;

    for(int i=0;i<6;i++){
        arr[i] = n;
        n++;
    }

    PrintAll();
    
    return 0;
}