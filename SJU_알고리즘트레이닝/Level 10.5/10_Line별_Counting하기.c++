#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, COUNT;

int arr[7][5] = {
    {1,0,0,0,0},
    {1,0,1,0,0},
    {1,1,0,1,0},
    {1,0,1,0,0},
    {0,1,0,0,1},
    {0,0,0,1,0},
    {1,1,0,0,0}
};

void INPUT(){
    cin >> n;
}

void PROCESS(){
    for(int i=0;i<7;i++){
        if(arr[i][n] == 1) COUNT++;
    }
}

void OUTPUT(){
    cout << COUNT;
}

int main(){

    INPUT();
    PROCESS();
    OUTPUT();

    return 0;
}