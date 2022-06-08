#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char ch, arr[4][4];

void input(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = ch;
        }
    }
}

void output(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main(){
    cin >> ch;

    input();
    output();

    return 0;
}