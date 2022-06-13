#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[5][3] = {
    {'D','A','A'},
    {'B','C','D'},
    {'E','F','A'},
    {'A','A','D'},
    {'F','G','E'}
};

char ch;

int main(){

    cin >> ch;

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == ch){
                cout << "(" << i << "," << j << ")\n";
            }
        }
    }

    return 0;
}