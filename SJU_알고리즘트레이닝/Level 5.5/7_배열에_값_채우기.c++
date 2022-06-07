#include <iostream>

using namespace std;

int data1[4];
int n;

int main(){
    
    cin >> n;

    for(int i=0;i<4;i++){
        data1[i] = n;
        n--;
    }

    for(int i=0;i<4;i++){
        cout << data1[i] << " ";
    }

    return 0;
}