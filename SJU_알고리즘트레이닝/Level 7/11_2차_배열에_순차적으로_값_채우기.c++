#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, arr[3][3];

void input(){
    cin >> n;
}

void process(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = n;
            n++;
        }
    }
}

void output(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
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