#include <iostream>
using namespace std;

char arr[5];

int main(){
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    
    int t=0;
    for(int i=0;i<5;i++){
        for(int j=t;j<5;j++){
            cout << arr[j] << " ";
        }
        cout << "\n";
        t++;
    }

    return 0;
}