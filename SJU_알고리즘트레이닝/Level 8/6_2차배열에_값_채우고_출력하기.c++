#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[3][4], n;

void input(){
    cin >> n;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = n;
            n++;
        }
    }
}

void process(){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr[i][j] += 1;
        }
    }
}

void output(){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    
    input();
    process();
    output();
    

    return 0;
}