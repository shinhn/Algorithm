#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2][3], sum;

void input(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
}

void process(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
    }
}

void output(){
    cout << sum;
}

int main(){
    input();
    process();
    output();

    return 0;
}